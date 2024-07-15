#include <iostream>
#include <cassert>
#include <string> // Include this header
#include <sstream> // Include this header for std::to_string

std::string change_base(int num, int base) {
    std::string result = "";
    while (num > 0) {
        int remainder = num % base;
        result = std::to_string(remainder) + result;
        num /= base;
    }
    return result;
}

int main(){
    int x = 2;
    for(int i = 2; i <= 10; ++i){
        std::cout << "Base " << i << ": " << change_base(x, i) << std::endl;
    }
    
    assert(change_base(x, x + 1) == std::to_string(x));
    
    return 0;
}