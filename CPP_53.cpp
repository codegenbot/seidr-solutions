
#include <iostream>
#include <cassert>
#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(nullptr)); // Add this line
    int x = rand() % 1000; // Change rand() to rand
    int y = rand() % 1000; // Change rand() to rand
    assert(add(x, y) == x + y);
    return 0;
}