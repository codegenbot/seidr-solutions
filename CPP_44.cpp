#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int x, int base) {
    std::string result = "";
    if (x == 0) return "0"; // Handle base case
    while (x > 0) {
        result = char('0' + x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}