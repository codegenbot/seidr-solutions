#include <iostream>
#include <vector>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    int a;
    std::cout << "Enter the first integer: ";
    std::cin >> a;
    
    int b;
    std::cout << "Enter the second integer: ";
    std::cin >> b;
    
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    
    return 0;
}