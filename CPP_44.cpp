#include <iostream>
#include <string>

std::string change_base(int x, int base) {
    std::string result;
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 123456789;
    assert (change_base(x, x + 1) == std::to_string(x));
    return 0;
}