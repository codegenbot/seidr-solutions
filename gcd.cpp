#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    int gcdVal = __gcd(num1, num2);

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdVal << std::endl;
    
    return 0;
}