#include <string>

std::string decimal_to_binary(int decimal);

int main() {
    // Main function code

    return 0;
}

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}