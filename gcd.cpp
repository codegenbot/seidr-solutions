#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << "." << std::endl;
    
    return 0;
}