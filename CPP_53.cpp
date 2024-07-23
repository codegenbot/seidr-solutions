#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Sum = " << add(a, b);
    return 0;
}