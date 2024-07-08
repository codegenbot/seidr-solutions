```cpp
#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    std::string binary = decimal_to_binary(15);
    assert(binary == "db11111db");
    return 0;
}