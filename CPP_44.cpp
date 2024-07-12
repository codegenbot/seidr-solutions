#include <string>
#include <cassert>
#include <iostream>

std::string change_base(int x, int base);

int main() {
    // Your implementation for the main function if needed
}

std::string change_base(int x, int base){
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}