```cpp
#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
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
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << decimal_to_binary(decimal) << std::endl;
    return 0;
}