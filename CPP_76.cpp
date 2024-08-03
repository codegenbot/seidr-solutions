#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        std::cout << "Invalid input. Please enter positive integers." << std::endl;
        return false;
    }
    
    double y = pow(n, ceil(log2(x)));
    return (y == x);
}

int main() {
    int x, n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter the base: ";
    std::cin >> n;
    
    if (is_simple_power(x, n)) {
        std::cout << x << " is a simple power of " << n << "." << std::endl;
    } else {
        std::cout << x << " is not a simple power of " << n << "." << std::endl;
    }
    
    return 0;
}