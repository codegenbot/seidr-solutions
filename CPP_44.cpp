#include <cassert>
#include <iostream>
#include <string>

std::string std::to_string(int x) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(std::to_string(x, x + 1) == std::to_string(x));
}