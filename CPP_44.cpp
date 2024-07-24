#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int x, int base) {
    if (x == 0) return "0";
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x) == std::to_string(x));
    std::cout << "Test passed!" << std::endl;
    return 0;
}