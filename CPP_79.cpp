#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    // Reverse the string
    std::string result = binary;
    std::reverse(result.begin(), result.end());
    return "db" + result + "db";
}

int main() {
    assert (decimal_to_binary(15) == "db1111db");
    return 0;
}