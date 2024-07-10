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
    std::getline(std::cin, input); 
    std::string lenStr = "";
    for(int i=input.length(); i>0; --i) {
        int digit = i % 10;
        lenStr += '0' + digit;
        i /= 10;
    }
    bool flag = true;
    for(auto c : lenStr){
        flag &= std::isdigit(c); 
    }
    if(flag && prime_length(lenStr)) {  
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
}