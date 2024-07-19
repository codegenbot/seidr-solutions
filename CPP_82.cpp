```cpp
#include <iostream>
#include <string>

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

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (prime_length(str)) {
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
    return 0;
}