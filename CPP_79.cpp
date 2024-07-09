#include <iostream>
#include <string>

std::string decimal_to_binary(int n) {
    std::string binary = "";
    while (n > 0) {
        if (n % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        n /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::string binary = decimal_to_binary(decimal);
    std::cout << "Binary representation: " << binary << std::endl;
    return 0;
}