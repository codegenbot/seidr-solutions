#include <iostream>
#include <string>
#include <cctype>

bool prime_length(const std::string& str) {
    int len = static_cast<int>(str.length());
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() 
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    bool flag = true;
    for(auto c : input){
        if(!std::isdigit(c)) {
            flag = false;
            break; 
        } 
    }
    if (flag && prime_length(std::to_string(input.length()))) {
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
}