```cpp
#include <iostream>
#include <string>

bool prime_length(const std::string& str) {
    size_t len = str.length();
    if(len <= 1) return false;
    for(size_t i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() 
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    if (prime_length(input)) {
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
}