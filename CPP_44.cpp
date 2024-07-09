#include <string> // Include the string header

std::string change_base(int x, int base){ // Use std::string instead of string
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result; // Use std::to_string
        x /= base;
    }
    return result;
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x)); // Use std::to_string
    return 0;
}