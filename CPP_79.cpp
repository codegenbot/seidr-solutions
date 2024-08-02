```cpp
#include <string>

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    return "db" + binary + "db";
}

int main(){
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << "Binary representation is: " << decimal_to_binary(decimal) << std::endl;
    return 0;
}