#include <iostream>
#include <cassert>
#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(NULL)); // include <cstdlib> for srand
    int x = rand() % 1000; // use rand() with srand
    int y = rand() % 1000; // use rand() with srand
    assert(add(x, y) == x + y); // include <cassert> for assert
    return 0;
}