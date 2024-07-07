```
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, 1.0 / (double)n);
    return std::abs(y - (int)y) < 1e-9 && (int)y == x;
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    if(is_simple_power(num1, num2)) {
        std::cout << "The number is a simple power of " << num2 << "." << std::endl;
    } else {
        std::cout << "The number is not a simple power of " << num2 << "." << std::endl;
    }
    return 0;
}