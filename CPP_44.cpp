#include <iostream>
#include <cassert>
#include <string>

std::string change_base(int a, int b) {
    std::string converted;
    while (a > 0) {
        converted = std::to_string(a % b) + converted;
        a /= b;
    }
    return converted;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}