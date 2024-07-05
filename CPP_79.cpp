#include <string>
#include <iostream>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + (binary == "" ? "0" : binary) + "db";
}

int main() {
    std::cout << decimal_to_binary(15) << std::endl; // Example usage
    return 0;
}