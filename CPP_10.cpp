#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(std::string str){
    return str == std::string(str.rbegin(), str.rend());
}

std::string make_palindrome(std::string str);

int main(){
    assert (make_palindrome("jerry") == "jerryrrej");
    return 0;
}

std::string make_palindrome(std::string str){
    int n = str.length();
    for(int i=n-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            std::string prefix = str.substr(0,i);
            std::reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}