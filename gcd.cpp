#include <iostream>
#include <cmath>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << "." << std::endl;
    return 0;
}