#include <string>
#include <cassert>
#include <sstream> // Include the correct header

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x)); // Specify std::to_string
    return 0;
}