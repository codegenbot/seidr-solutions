#include <iostream>
#include <string>

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary += '0';
        else
            binary += '1';
        decimal /= 2;
    }
    std::cout << "Binary representation of the number: " << "db" + binary + "db" << std::endl;

    return 0;
}