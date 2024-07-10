#include <iostream>
#include <string>
#include <cctype>

int prime_length(int len) {
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
        flag &= std::isdigit(c); 
    }
    int len = input.length(); 
    std::string str_len = std::to_string(len);
    bool flag_prime = prime_length(len);
    if(flag && flag_prime) {  
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
}