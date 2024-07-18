#include <string>

std::string decimal_to_binary(int decimal);

#include <iostream>

std::string decimal_to_binary(int decimal){
    std::string binary = "db";
    while(decimal > 0){
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary + "db";
}

int main() {
    int decimal;
    std::cin >> decimal;
    std::string result = decimal_to_binary(decimal);
    std::cout << result << std::endl;
    return 0;
}