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
    // Test cases
    assert(change_base(10, 2) == "1010");
    assert(change_base(16, 16) == "10");
    assert(change_base(100, 10) == "100");
    
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}