#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while (decimal > 0) {
        if (decimal % 2 == 0)
            binary.insert(0, "0");
        else
            binary.insert(0, "1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main(){
    int input = 0;
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::string output = decimal_to_binary(input);
    std::cout << "Binary representation: " << output << std::endl;
    return 0;
}