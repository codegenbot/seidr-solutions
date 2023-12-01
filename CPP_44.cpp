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
    std::cout << change_base(21, 2) << std::endl; // Expected output: "10101"
    std::cout << change_base(255, 16) << std::endl; // Expected output: "FF"
    std::cout << change_base(1000, 8) << std::endl; // Expected output: "1750"
    return 0;
}