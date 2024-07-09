```cpp
#include <cassert>

string decimal_to_binary(int decimal);

int main() {
    assert(decimal_to_binary(15) == "db01111db");
    return 0;
}

string decimal_to_binary(int decimal){
    string binary = "";
    while (decimal > 0) {
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    return "db" + binary + "db";
}