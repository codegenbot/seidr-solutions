```cpp
#include <cassert>
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    if(binary.empty()) return "db0db";
    assert("db" + binary + "db" == std::string("db") + binary + std::string("db"));
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    return 0;
}