#include <iostream>
#include <string>

std::string change_base(int x, int base) {
    std::string result = "";

    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }

    return result;
}

int main() {
    std::cout << change_base(8, 3) << std::endl;
    std::cout << change_base(8, 2) << std::endl;
    std::cout << change_base(7, 2) << std::endl;

    return 0;
}