#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary.insert(binary.begin(), '0');
        else
            binary.insert(binary.begin(), '1');
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert (decimal_to_binary(15) == "db1111db");
    return 0;
}