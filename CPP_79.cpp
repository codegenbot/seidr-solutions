```cpp
#include <iostream>
#include <string>

std::string decimal_to_binary(int n) {
    std::string binary = "";
    while(n > 0){
        if (n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << "The binary representation of the number is: " << decimal_to_binary(decimal) << std::endl;
    return 0;
}