#include <iostream>
#include <string>

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