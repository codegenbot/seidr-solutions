#include <string>
#include <cassert>

std::string change_base(int x, int base){
    std::string result = "";
    
    while(x > 0){
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x = x / base;
    }
    
    return result;
}