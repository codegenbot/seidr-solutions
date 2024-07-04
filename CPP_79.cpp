#include <string>
#include <iostream>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    if (decimal == 0) {
        return "db0db";
    }
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    std::cout << decimal_to_binary(15) << std::endl; // Expected output: db1111db
    return 0;
}