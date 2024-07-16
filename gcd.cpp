```cpp
#include <iostream>
#include <cstdlib>
#include <string>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
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
    if (!(std::cin >> a)) {
        std::cerr << "Invalid input for the first number." << std::endl;
        return 1;
    }

    std::cout << "Enter second number: ";
    if (!(std::cin >> b)) {
        std::cerr << "Invalid input for the second number." << std::endl;
        return 1;
    }
    int result = gcd(a, b);
    std::cout << "GCD of the numbers is: " << result << std::endl;
    return 0;
}