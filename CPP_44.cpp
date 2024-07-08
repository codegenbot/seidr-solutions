#include <string>
#include <iostream>
#include <cassert>
#include <sstream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        std::ostringstream oss;
        oss << (x % base);
        result = oss.str() + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 42;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}