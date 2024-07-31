#include <iostream>
#include <string>
#include <cassert>

std::string change_base(int x, int base);

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::__cxx11::to_string(x).c_str());
}

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::__cxx11::to_string(x % base) + result;
        x /= base;
    }
    return result;
}