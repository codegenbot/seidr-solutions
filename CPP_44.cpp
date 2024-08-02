#include <iostream>
#include <cassert>
#include <string>  // Include the <string> header

std::string change_base(int x, int base) {
    std::string res = "";
    while (x > 0) {
        res = std::to_string(x % base) + res;
        x /= base;
    }
    return res;
}

int main() {
    int x = 42;
    assert(change_base(x, x + 1) == std::to_string(x));  // Add std::to_string
    return 0;
}