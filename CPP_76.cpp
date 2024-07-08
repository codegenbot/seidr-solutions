#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    int x;
    int n;
    
    std::cout << "Enter a base number: ";
    std::cin >> x;
    
    std::cout << "Enter an exponent: ";
    std::cin >> n;
    
    if (is_simple_power(x, n)) {
        std::cout << "The number is a simple power of the given base.\n";
    } else {
        std::cout << "The number is not a simple power of the given base.\n";
    }
    
    return 0;
}