#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    if(decimal == 0){
        binary += '0';
    }
    else{
        while(decimal > 0){
            binary = (decimal % 2 == 0 ? '0' : '1') + binary;
            decimal /= 2;
        }
    }
    return binary;
}

int main() {
    assert(decimal_to_binary(15) == "1111");
    return 0;
}