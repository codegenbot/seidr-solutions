#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db11111db");
    std::cout << decimal_to_binary(5) << std::endl;  
    return 0;
}