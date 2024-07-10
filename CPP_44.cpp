#include <iostream>
#include <string>
#include <cassert> // Include for assert
#include <sstream> // Include for to_string

std::string change_base(int x, int base){
    if(base == 0) return "0";  // Handle base case
    if (x == 0) return "0";    // Handle x = 0
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

    assert(change_base(x, x + 1) == std::to_string(x)); // Update assert statement
    std::cout << result << std::endl;
    return 0;
}