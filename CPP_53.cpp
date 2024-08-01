#include <iostream>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand((unsigned)time(0));
    int x = rand() % 1000;
    int y = rand() % 1000;
    assert(add(x, y) == x + y);
}