#include <string>
#include <iostream>
#include <cassert>

std::string make_palindrome(std::string str){
    if(str.empty()) return "";
    
    int n = str.length();
    int i = n-1;
    while(i >= 0 && str[i] == str[n-1]) i--;
    
    std::string prefix = str.substr(0, i+1);
    std::string suffix = str.substr(i+1);
    
    std::string palindrome = str + std::string(prefix.rbegin(), prefix.rend()) + suffix;
    return palindrome;
}

int main() {
    std::cout << make_palindrome("jerry") << std::endl;
    return 0;
}