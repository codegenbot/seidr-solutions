```cpp
#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    return "db" + binary + "db";
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Binary representation of the number is: " << decimal_to_binary(num) << std::endl;
    return 0;
}