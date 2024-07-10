#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert (decimal_to_binary(15) == "db1111db");
    return 0;
}