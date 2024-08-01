#include <string>
#include <cassert>
#include <iostream>

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
    assert(std::to_string(x) == change_base(x, x + 1));

    std::cout << "Test Passed!" << std::endl;
    return 0;
}