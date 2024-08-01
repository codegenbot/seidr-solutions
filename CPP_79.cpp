#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "";  // Initialize an empty string
    while(decimal > 0){
        binary = ((decimal % 2) == 0 ? '0' : '1') + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";  // Add "db" at beginning and end
}

int main(){
    assert(decimal_to_binary(15) == "db1111db");  // Test the function
    return 0;
}