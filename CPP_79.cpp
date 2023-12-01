#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "db";
    
    while(decimal > 0){
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    
    return binary + "db";
}

int main() {
    std::cout << decimal_to_binary(15) << std::endl;

    return 0;
}