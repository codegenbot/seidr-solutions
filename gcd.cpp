#include <iostream>
#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    int a;
    std::cout << "Enter the first number: ";
    std::cin >> a;

    int b;
    std::cout << "Enter the second number: ";
    std::cin >> b; 
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    
    return 0;
}