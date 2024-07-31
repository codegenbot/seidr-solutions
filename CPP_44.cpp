#include <iostream>
#include <string>
#include <cassert>

std::string change_base(int x, int base);

int main() {
    #include <string>
    int x = 10;
    assert(std::__cxx11::to_string(x) == change_base(x, x + 1));
}

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::__cxx11::to_string(x % base) + result;
        x /= base;
    }
    return result;
}