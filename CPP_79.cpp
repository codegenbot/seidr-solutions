#include <string>

std::string decimal_to_binary(int decimal) {
    std::string binary = "db";
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = std::to_string(remainder) + binary;
        decimal /= 2;
    }
    return binary + "db";
}