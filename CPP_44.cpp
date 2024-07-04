#include <iostream>
#include <string>
#include <cassert>

std::string change_base(int x, int base) {
    if (x == 0) return "0";
    std::string result = "";
    const std::string digits = "0123456789ABCDEF";
    while (x > 0) {
        result = digits[x % base] + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));  // Use std::to_string
    std::cout << "Test passed!" << std::endl;
    return 0;
}