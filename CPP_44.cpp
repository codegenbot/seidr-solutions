#include <string>
#include <cassert>
#include <iostream> // Added for std::cout
#include <sstream> // Added for std::stringstream

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
    std::stringstream ss; // Create stringstream object
    ss << x; // Insert x into stringstream
    assert(change_base(x, x + 1) == ss.str()); // Compare with stringstream content
    return 0;  
}  