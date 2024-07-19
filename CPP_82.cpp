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
    std::cout << "Enter a number: ";
    int len;
    std::cin >> len;
    str = std::to_string(len);
    std::cin.ignore(); 
    bool isPrime = prime_length(str);

    if(isPrime) {
        std::cout << "The length of the string is a prime number." << std::endl;
    } else {
        std::cout << "The length of the string is not a prime number." << std::endl;
    }
}