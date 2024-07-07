#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    double y = pow(n, 1.0);
    return (int)y == x;
}

int main() {
    int num, power;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Enter the power to check: ";
    std::cin >> power;
    
    if (is_simple_power(num, power)) {
        std::cout << num << " is a simple power of " << power << ".\n";
    } else {
        std::cout << num << " is not a simple power of " << power << ".\n";
    }
    
    return 0;
}