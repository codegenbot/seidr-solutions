#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";

    while(decimal > 0){
        binary = ((decimal % 2) == 0 ? '0' : '1') + binary;
        decimal /= 2;
    }
    
    return "db" + binary + "db";
}

int main(){
    int input_decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> input_decimal;

    std::cout << decimal_to_binary(input_decimal) << std::endl;

    return 0;
}