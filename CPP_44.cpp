#include <iostream>
#include <string>
#include <cassert>

std::string to_string(int val){
    return std::to_string(val);
}

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
    assert(change_base(x, x + 1) == to_string(x)); 
    x = 10;
    assert(change_base(x, x) == to_string(x));
    x = 16;
    assert(change_base(x, x) == to_string(x));
    x = 8;
    assert(change_base(x, x) == to_string(x));
    return 0;
}