#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main(){
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::string result = decimal_to_binary(decimal);
    std::cout << "Binary representation: " << result << std::endl;
    return 0;
}