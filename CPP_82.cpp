```cpp
#include <iostream>
#include <string>

bool prime_length(std::string str){
    auto end = str.begin() + str.size();
    bool isPrime = false;

    if(end - str.begin() <= 1)
        return false;
    
    for(auto it = str.begin(); it != end; ++it){
        int i = std::stoi(string(it, end));
        if(i * i > end - str.begin())
            break;
        if(i == (end - str.begin())){
            isPrime = true;
            break;
        }
        if((end - str.begin()) % i == 0){
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
    
    if(prime_length(str)){
        std::cout << "The length of the given string is prime." << std::endl;
    } else{
        std::cout << "The length of the given string is not prime." << std::endl;
    }
}