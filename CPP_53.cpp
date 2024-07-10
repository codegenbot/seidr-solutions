#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>

int add(int x, int y) {
    return x + y;
}

int main() {
    std::srand(time(NULL));
    int x = std::rand() % 1000;
    int y = std::rand() % 1000;
    assert(add(x, y) == x + y);

    return 0;
}