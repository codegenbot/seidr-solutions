#include <iostream>
#include <cstdlib>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

void test() {
    srand(time(0));

    int x = rand() % 1000;
    int y = rand() % 1000;

    assert(add(x, y) == x + y);
}

int main() {
    test();

    return 0;
}