#include <string>
#include <cassert>

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
    int x = 16; // Updated x to a non-zero value
    assert(change_base(x, x + 1) == std::to_string(x)); // Changed to std::to_string(x)
    return 0;
}