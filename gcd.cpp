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
    std::string a, b;
    std::cout << "Enter two strings: ";
    std::cin >> a >> b;
    std::cout << "GCD: " << gcd(a.size(), b.size()) << std::endl;
    return 0;
}