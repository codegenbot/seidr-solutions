#include <iostream>
#include <string>

std::string change_base(int x, int base){
    std::string result = (base == 1) ? std::string(x, '1') : "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 10;
    std::cout << (change_base(x, x + 1) == std::to_string(x) ? "Test Passed" : "Test Failed") << std::endl;
    return 0;
}