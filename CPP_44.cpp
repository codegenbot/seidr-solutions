#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = (char)((x % base) + '0') + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 2;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}