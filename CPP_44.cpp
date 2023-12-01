#include <string>
#include <cassert>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x /= base;
    }
    return result;
}

#include <iostream>

int main() {
    // Test the change_base function
    int x, base;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::string converted = change_base(x, base);
    std::cout << "Converted number: " << converted << std::endl;
    return 0;
}