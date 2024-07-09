#include <iostream>

int main() {
    int gcd() {
        int a, b;
        std::cout << "Enter two integers: ";
        std::cin >> a >> b;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    std::cout << "GCD: " << gcd() << std::endl;
    return 0;
}