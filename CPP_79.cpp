#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    if (decimal == 0) return "db0db";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    // Test cases
    assert(decimal_to_binary(15) == "db1111db");
    assert(decimal_to_binary(0) == "db0db");
    assert(decimal_to_binary(1) == "db1db");

    // Additional cases for thorough testing
    std::cout << decimal_to_binary(10) << std::endl; // Output should be "db1010db"
    return 0;
}