#include <iostream>

int findGCD(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);

    if (b == 0) return a;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b; 
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    int result = findGCD(a, b);
    std::cout << "The GCD of the given numbers is: " << result << std::endl;
    return 0;
}