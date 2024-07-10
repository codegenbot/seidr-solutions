#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << add(num1, num2) << std::endl;
    return 0;
}