#include <string>
#include <algorithm>

bool is_palindrome(const std::string& str){
    return str == std::string(str.rbegin(), str.rend());
}

std::string make_palindrome(const std::string& str){
    std::string rev_str(str.rbegin(), str.rend());
    for(int i = str.size(); i > 0; --i){
        if(is_palindrome(str.substr(i))){
            return str + rev_str.substr(0, str.size() - i);
        }
    }
    return "";
}