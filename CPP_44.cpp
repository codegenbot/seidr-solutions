#include <iostream>
#include <string>
#include <cassert>

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
    
    assert(std::__cxx11::to_string(x) == std::__cxx11::to_string(x + 1));
    
    return 0;
}