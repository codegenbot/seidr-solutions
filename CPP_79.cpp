#include <cassert>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    assert(binary == std::to_string(15).find("1111") != std::string::npos);
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    return 0;
}