#include <string>

std::string decimal_to_binary(int decimal);

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    return 0;
}

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