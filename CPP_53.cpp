#include <iostream>
#include <cstdlib>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    std::cout << "Enter two numbers to add: ";
    std::cin >> x >> y;

    std::cout << "Sum: " << add(x, y) << std::endl;

    return 0;
}