#include <string>
#include <cassert>
#include <iostream> // Add this line

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result == "" ? "0" : result;
}

int main() {
    int x = 9; // Change x value here
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}