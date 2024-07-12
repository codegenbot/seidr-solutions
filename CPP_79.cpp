#include <iostream>
#include <string>
#include <sstream>

std::string decimal_to_binary(int decimal){
    std::ostringstream binary_stream;
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary_stream << "0";
        else
            binary_stream << "1";
        decimal /= 2;
    }
    return binary_stream.str();
}

int startProgram() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::string binary = decimal_to_binary(decimal);
    std::cout << "The binary representation is: " << binary << std::endl;
    return 0;
}