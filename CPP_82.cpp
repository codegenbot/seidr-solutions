```cpp
#include <iostream>
#include <string>

bool prime_length(std::string str){
    int len = static_cast<int>(str.length());
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

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Is the length of the string prime? " << std::boolalpha << prime_length(str) << std::noboolalpha; 
}