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
    // Test the function with some sample inputs
    std::cout << change_base(10, 2) << std::endl; // Output: 1010
    std::cout << change_base(15, 16) << std::endl; // Output: F
    std::cout << change_base(255, 16) << std::endl; // Output: FF

    return 0;
}