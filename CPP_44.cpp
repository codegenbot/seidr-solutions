#include <string>
#include <cassert>
#include <iostream> // Add include for std::cout

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    std::cout << "Test passed" << std::endl; // Output success message
    return 0;
}