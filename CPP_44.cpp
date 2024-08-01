#include <string>
#include <cassert>
#include <iostream>
#include <string> // Added to ensure std::to_string works correctly

std::string change_base(int num, int base){
    std::string result = "";
    while(num > 0) {
        result = std::to_string(num % base) + result;
        num /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));

    std::cout << "Test Passed!" << std::endl;
    return 0;
}