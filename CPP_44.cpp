#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

std::string change_base(int x, int base) {
    if (x == 0) return "0";
    std::string result = "";
    const std::string digits = "0123456789ABCDEF";
    while (x > 0) {
        result += digits[x % base];
        x /= base;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    std::cout << "Test passed!" << std::endl;
    return 0;
}