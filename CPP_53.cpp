#include <iostream>
#include <cassert>
#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = std::rand() % 1000;
    int y = std::rand() % 1000;
    std::cout << add(x, y) << std::endl;
    assert(add(x, y) == x + y);
    return 0;
}