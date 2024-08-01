#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

void test_cases() {
    assert(decimal_to_binary(15) == "1111");
}

int main() {
    test_cases();

    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    
    std::string binary = decimal_to_binary(decimal);
    std::cout << "Binary equivalent: " << binary << std::endl;

    return 0;
}