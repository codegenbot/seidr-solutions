#include <iostream>
#include <string>
#include <cctype>
#include <limits>

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
    std::cin >> skipws;
    int len = 0;
    while((std::cin >> skipws).good()) {
        len *= 10;
        len += std::cin.get() - '0';
    }
    bool flag = true;
    for(auto c : input){
        flag &= std::isdigit(c); 
    }
    bool result = flag && prime_length(std::to_string(len));
    if(result) {  
        std::cout << "The length of the string is prime." << std::endl;
    } else {
        std::cout << "The length of the string is not prime." << std::endl;
    }
}