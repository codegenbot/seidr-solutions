#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        if (decimal % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << decimal_to_binary(num) << std::endl;
    return 0;
}