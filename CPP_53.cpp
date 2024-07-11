#include <iostream>
#include <cstdlib>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int main() {
    srand(time(0));
    int x = rand() % 1000;
    int y = rand() % 1000;

    assert(add(x, y) == x + y);
    assert(subtract(x, y) == x - y);
    assert(multiply(x, y) == x * y);

    return 0;
}