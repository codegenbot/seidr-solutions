#include <iostream>
#include <string>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 0;
    int b = 0;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << std::endl;

    return 0;
}