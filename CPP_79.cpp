#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal);

int main() {
    int num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;
    std::cout << "Binary equivalent: " << decimal_to_binary(num) << std::endl;
    return 0;
}

std::string decimal_to_binary(int decimal){
    std::string binary = "db";
    while(decimal > 0){
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary + "db";
}