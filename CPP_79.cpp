```cpp
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << "The binary representation is: " << decimal_to_binary(decimal) << std::endl;
    return 0;
}