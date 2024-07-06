#include <string>
#include <iostream>

std::string decimal_to_binary(int n){
    std::string binary = "";
    do{
        if(n % 2 == 0) binary += '0';
        else binary += '1';
        n /= 2;
    }while(n > 0);
    return binary;
}

int main() {
    assert(decimal_to_binary(15) == "1111");
    std::cout << decimal_to_binary(15) << std::endl; 
    return 0;
}