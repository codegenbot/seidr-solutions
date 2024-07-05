#include <string>
#include <iostream>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + (binary == "" ? "0" : binary) + "db";
}

int main() {
    int number;
    std::cout << "Enter a decimal number: ";
    std::cin >> number;
    std::cout << decimal_to_binary(number) << std::endl;
    return 0;
}