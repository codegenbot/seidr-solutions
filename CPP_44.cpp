#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

std::string change_base(int num, int base) {
    std::string result = "";
    while (num > 0) {
        int remainder = num % base;
        result = std::to_string(remainder) + result;
        num /= base;
    }
    return result;
}

int main() {
    int x = 2;
    for (int i = 2; i <= 10; ++i) {
        std::cout << "Base " << i << ": " << change_base(x, i) << std::endl;
    }

    assert(std::to_string(x) == change_base(x, x + 1));

    return 0;
}