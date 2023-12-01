#include <string>
#include <cassert>
#include <iostream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x /= base;
    }
    return result;
}

int main() {
    // Test the change_base function
    assert(change_base(10, 2) == "1010");
    assert(change_base(15, 16) == "F");
    assert(change_base(255, 16) == "FF");
    assert(change_base(255, 8) == "377");
    assert(change_base(255, 10) == "255");

    std::cout << "All tests passed!" << std::endl;

    return 0;
}