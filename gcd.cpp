#include <iostream>

int findGCD(int a, int b) {
    if (b == 0) return std::abs(a);
    while (b != 0) {
        int temp = b;
        b = std::abs(a) % std::abs(b);
        a = temp;
    }
    return std::abs(b); 
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    a = std::abs(a);
    b = std::abs(b);
    int result = findGCD(a, b);
    std::cout << "The GCD of the given numbers is: " << result << std::endl;
    return 0;
}