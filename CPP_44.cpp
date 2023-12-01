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
    std::cout << change_base(10, 2) << std::endl; // Output: 1010
    std::cout << change_base(16, 8) << std::endl; // Output: 20
    std::cout << change_base(123, 16) << std::endl; // Output: 7B

    return 0;
}