```cpp
#include <iostream>
#include <string>

std::string decimal_to_binary(int n){
    std::string binary = "";
    do{
        if(n % 2 == 0) binary += '0';
        else binary += '1';
        n /= 2;
    }while(n > 0);
    return std::string(binary.rbegin(), binary.rend()); 
}

int main(){
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << "Binary representation of the decimal number is: " << decimal_to_binary(decimal) << std::endl;
    return 0;
}