```cpp
#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Enter a decimal number: ";
    std::cin >> n;

    std::string binary = decimal_to_binary(n);
    std::cout << "The binary equivalent is: " << binary << std::endl;

    return 0;
}

std::string decimal_to_binary(int n){
    std::string binary = "";
    do{
        if(n % 2 == 0) binary += '0';
        else binary += '1';
        n /= 2;
    }while(n > 0);
    return std::string(binary.rbegin(), binary.rend()); 
}