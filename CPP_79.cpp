```cpp
#include <iostream>
#include <string>
#include <cassert>

int main() {
    std::string binary = decimal_to_binary(15);
    //assert(std::decimal_to_binary(15) == "db11111db");
    return 0;
}

std::string decimal_to_binary(int decimal){
    std::string binary;
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}