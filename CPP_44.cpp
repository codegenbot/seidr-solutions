#include <iostream>
#include <sstream>
#include <cassert>
#include <string> // Add this line for string conversion

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
    std::string result = change_base(x, 10);

    assert(change_base(x, x + 1) == std::__cxx11::to_string(x)); // Change here

    std::cout << result << std::endl;
    return 0;
}