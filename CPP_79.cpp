#include <string>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    while(decimal > 0) {
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    return "db" + binary + "b";
}