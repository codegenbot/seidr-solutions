#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int main() {
    std::srand((unsigned)std::time(0));
    int x = std::rand() % 1000;
    int y = std::rand() % 1000;
    assert(add(x, y) == x + y);
}