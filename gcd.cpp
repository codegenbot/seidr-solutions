#include <cmath>

int findGCD(int a, int b) {
    if (b == 0) return std::abs(a);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(b); 
}

int main() {
    int a, b;
    // Read input from user
    std::cout << "Enter first integer: ";
    std::cin >> a;
    std::cout << "Enter second integer: ";
    std::cin >> b;

    int result = findGCD(a, b);
    std::cout << "The GCD is: " << result << std::endl;
    
    return 0;
}