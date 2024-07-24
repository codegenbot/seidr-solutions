#include <iostream>
#include <string>
#include <cassert>

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int contest_main(){
    int x, base;
    std::cin >> x >> base;
    std::cout << change_base(x, base) << std::endl;
    
    return 0;
}