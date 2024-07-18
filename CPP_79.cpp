#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal);

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::string binary = decimal_to_binary(decimal);
    std::cout << "Binary representation: " << binary << std::endl;
    return 0;
}

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary;
}