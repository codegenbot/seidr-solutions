#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int x, int base);

int main() {
    int x = 10;
    if (change_base(x, x + 1) == std::to_string(x)) {
        std::cout << "Test passed!" << std::endl;
    }
    return 0;
}

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}