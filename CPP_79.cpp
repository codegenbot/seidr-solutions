#include <string>

std::string decimal_to_binary(int decimal);

std::string decimal_to_binary(int decimal){
    std::string binary = "db";

    if(decimal == 0){
        binary += "0";
    }
    else{
        while(decimal > 0){
            binary = std::to_string(decimal % 2) + binary;
            decimal /= 2;
        }
    }

    binary += "db";
    return binary;
}