```cpp
#include <iostream>
#include <string>

std::string decimal_to_binary(int n) {
    std::string binary = "";
    do{
        if(n % 2 == 0) binary += '0';
        else binary += '1';
        n /= 2;
    }while(n > 0);
    return std::string(binary.rbegin(), binary.rend()); 
}

int main() {
    int number;
    std::cout << "Enter a decimal number: ";
    std::cin >> number;
    std::cout << "Binary representation is: " << decimal_to_binary(number) << std::endl;
    return 0;
}