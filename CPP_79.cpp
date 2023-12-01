#include <string>

std::string decimal_to_binary(int decimal) {
    std::string binary = "db";

    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal = decimal / 2;
    }

    return binary + "db";
}