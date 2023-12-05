#include <cmath>
#include <iostream>

int modp(double n, double p) {
    return (int)(std::pow(2, n) % p);
}

int main() {
    // Test cases
    std::cout << "modp(3, 5): " << modp(3, 5) << std::endl;
    std::cout << "modp(1101, 101): " << modp(1101, 101) << std::endl;
    std::cout << "modp(0, 101): " << modp(0, 101) << std::endl;
    std::cout << "modp(3, 11): " << modp(3, 11) << std::endl;
    std::cout << "modp(100, 101): " << modp(100, 101) << std::endl;
    return 0;
}