#include <iostream>
#include <string>
#include <cassert>

std::string change_base(int x, int base) {
    if (x == 0) return "0";
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder < 10)
            result = char('0' + remainder) + result;
        else
            result = char('A' + remainder - 10) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}