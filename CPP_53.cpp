#include <cstdlib>

int randomAdd(int x, int y) {
    return rand() % (x + y) + min(x, y);
}