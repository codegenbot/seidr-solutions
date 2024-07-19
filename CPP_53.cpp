#include <iostream>
#include <cassert>
#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(nullptr));
    int x = rand() % 1000;
    int y = rand() % 1000;
    std::cout << "Result: " << add(x, y);
    return 0;
}