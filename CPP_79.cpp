```cpp
#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal);

int main() {
    std::string binary = decimal_to_binary(15);
    assert(binary == "10101");
    return 0;
}

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    return binary;
}