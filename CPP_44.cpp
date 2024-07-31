#include <string> // Added for std::to_string
#include <cassert>
#include <iostream> 
#include <sstream> 

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
    std::stringstream ss; 
    ss << x; 
    assert(change_base(x, x + 1) == std::to_string(x)); 
    return 0;
}