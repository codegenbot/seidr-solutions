```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == int(y));
}

int main() {
    int num1, num2;
    std::cout << "Enter a number: ";
    std::cin >> num1;
    std::cout << "Enter another number: ";
    std::cin >> num2;
    if (is_simple_power(num1, num2))
        std::cout << "The first number is a power of the second.\n";
    else
        std::cout << "The first number is not a power of the second.\n";
    return 0;
}