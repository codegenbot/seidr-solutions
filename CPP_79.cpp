#include <string>

string decimal_to_binary(int decimal) {
    string binary = "db";

    // If the decimal is zero
    if (decimal == 0) {
        binary += "0";
        return binary + "db";
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }

    return binary + "db";
}