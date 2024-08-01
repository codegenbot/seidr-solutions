#include <string> // Include the string header to use to_string

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x /= base;
    }
    return result;
}

int cpp44_main(){ // Change the name of the main function
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x)); // Use std::to_string here
    return 0;
}