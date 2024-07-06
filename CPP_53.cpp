#include <cstdlib>

int randomAdd(int x, int y) {
    srand(time(0)); // seed the random number generator
    return rand() % (x + y) + 1;
}