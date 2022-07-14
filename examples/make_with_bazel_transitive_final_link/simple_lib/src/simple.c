#include <stdio.h>
#include "simple.h"
#include "builtWithBazel.h"

void simpleFun(void) {
  printf("simpleFun: %s", bazelSays());
}

int main(int argc, char **argv) {
    simpleFun();
}
