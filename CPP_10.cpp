#include <string>

bool is_palindrome(const std::string& str){
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

std::string make_palindrome(std::string str){
    if(str.empty()) return "";
    int n = str.length();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))){
            return str + std::string(str.begin(), str.begin() + i);
        }
    }
    return "";
}