#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "db"; 
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    return binary + "db";
}

int main() {
    assert (decimal_to_binary(15) == "db1111db");
    return 0;
}