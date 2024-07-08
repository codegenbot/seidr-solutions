#include <string>
#include <algorithm>
#include <cassert>

bool is_palindrome(const std::string& str){
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

std::string make_palindrome(std::string str);

std::string make_palindrome(std::string str){
    if(str.empty()) return str;
    int n = str.size();
    for(int i=n-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            return str + std::string(str.begin(), str.begin()+i);
        }
    }
    return str;   
}