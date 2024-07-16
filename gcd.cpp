```c
#include <iostream>
#include <cstdlib>
#include <string>

int gcd(int a, int b) {
    if (a > b) {
        std::swap(a, b);
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; 
}

int main() {
    int a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    int result = gcd(a, b);
    std::cout << "GCD of the numbers is: " << result << std::endl;
    return 0;
}