#include <cstdlib>

int random(int x, int y) {
    return rand() % (x - y + 1) + y;
}