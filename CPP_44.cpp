#include <iostream>
#include <cassert>
#include <string>
#include <string> // Add this line

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
    assert(change_base(x, 10) == std::to_string(x));
    return 0;
}