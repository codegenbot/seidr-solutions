```cpp
#include <iostream>
#include <string>
#include <cassert>

bool prime_length(std::string str){
    int len = str.length();
    bool isPrime = true;

    if(len <= 1)
        return false;

    for(int i = 2; i*i <= len; i++){
        if(len % i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main_function(){
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if(prime_length(str) != true)
        std::cerr << "Invalid input. Prime length must be true." << std::endl;
    return 0;
}