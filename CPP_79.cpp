#include <iostream>
#include <string>

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    std::cout << "Binary representation is: " << "db" + binary + "db" << std::endl;
}