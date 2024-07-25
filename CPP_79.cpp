#include <string>

std::string decimal_to_binary(int decimal) {
    std::string binary = "db";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? '0' : '1') + binary;
        decimal /= 2;
    }
    return binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
}