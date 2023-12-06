#include <iostream>
#include <cmath>

int modp(double n, double p) {
    int result = pow(2, n);
    while (result >= p) {
        result -= p;
    }
    return result;
}

int main() {
    std::cout << "Enter a number: ";
    double n;
    std::cin >> n;
    std::cout << "Enter a prime number: ";
    double p;
    std::cin >> p;
    std::cout << modp(n, p) << std::endl;
    return 0;
}