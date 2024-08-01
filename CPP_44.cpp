#include <string>
#include <cassert>
#include <iostream> // Add this header for std::to_string

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x)); // Update this line
    return 0;
}