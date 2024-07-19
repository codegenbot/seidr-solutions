#include <iostream>
#include <string>

bool prime_length(std::string str){
    int len = static_cast<int>(str.length());
    bool isPrime = false;

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

int main() {
    std::string str;
    char c;
    std::cout << "Enter a string: ";
    
    while ((c = std::cin.get()) != '\n') {
        str += c;
    }
    
    bool isPrime = prime_length(str);
    if(isPrime)
        std::cout << "The length of the string is a prime number.";
    else
        std::cout << "The length of the string is not a prime number.";
}