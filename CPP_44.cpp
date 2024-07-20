#include <iostream>
#include <string>
#include <cassert>

std::string change_base(int num, int base);

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}

std::string change_base(int num, int base) {
    return num < base ? std::to_string(num) : change_base(num / base, base) + std::to_string(num % base);
}