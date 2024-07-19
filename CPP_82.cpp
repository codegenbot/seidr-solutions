#include <iostream>
#include <string>

bool prime_length(std::string str){
    std::string strLen = std::to_string(str.length());
    bool isPrime = false;

    if(strLen.length() <= 1)
        return false;
    
    for(int i = 2; i*i <= strLen.length(); i++){
        if(strLen.length() % i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;

}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    bool isPrime = prime_length(str);
}