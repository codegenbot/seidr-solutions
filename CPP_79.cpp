#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal) {
    if (decimal == 0) {
        return "db0db";
    }
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int decimal;
    std::cin >> decimal;
    std::cout << decimal_to_binary(decimal);
    return 0;
}