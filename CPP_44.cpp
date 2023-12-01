#include <string>
#include <cassert>
#include <iostream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x /= base;
    }
    return result;
}

int main() {
    // Test the change_base function
    int x, base;
    std::cout << "Enter the number: ";
    std::cin >> x;
    std::cout << "Enter the base: ";
    std::cin >> base;

    std::string result = change_base(x, base);
    std::cout << "Result: " << result << std::endl;

    return 0;
}