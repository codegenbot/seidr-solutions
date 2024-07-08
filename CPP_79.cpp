#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal);

int main() {
    assert(std::abs(std::distance((std::string)"db" + decimal_to_binary(15), ((std::string)"d1111db") )) == 0);
}

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0) {
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    return "db" + binary + "db";
}