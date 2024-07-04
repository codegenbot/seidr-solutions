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
    int x;
    int base;
    std::cin >> x >> base;
    std::cout << change_base(x, base) << std::endl;
    return 0;
}