#include <string>
#include <cassert> 
#include <iostream>

std::string decimal_to_binary(int decimal) {
    std::string binary = "db";
    while (decimal > 0) {
        binary = ((decimal % 2) == 0 ? '0' : '1') + binary;
        decimal /= 2;
    }
    return binary + "db";
}

int main() {
    int decimal;
    std::cin >> decimal;
    std::cout << decimal_to_binary(decimal) << std::endl;
    return 0;
}