#include <iostream>
#include <cassert>
#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(nullptr)); // Add this line to seed the random number generator
    int x = rand() % 1000;
    int y = rand() % 1000;
    assert(add(x, y) == x + y);
    return 0;
}