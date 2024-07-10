#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        int remainder = decimal % 2;
        if(remainder == 1) binary.push_back('1');
        else binary.push_back('0');
        decimal /= 2;
    }
    return "db" + binary + "db";
}

void runProgram(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::string result = decimal_to_binary(num);
    std::cout << "Binary representation of the given number is: " << result << std::endl;
    return;
}