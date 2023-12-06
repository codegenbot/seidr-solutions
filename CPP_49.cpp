
#include <iostream>
#include <cmath>

double modp(double n, double p) {
    return fmod(pow(2, n), static_cast<double>(p));
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
```