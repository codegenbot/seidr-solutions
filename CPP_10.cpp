#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

bool is_palindrome(const std::string& str) {
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

std::string make_palindrome(std::string str){
    std::string rev_str(str.rbegin(), str.rend());
    for(int i = str.size() - 1; i >= 0; --i){
        if(is_palindrome(str.substr(i))){
            return str + rev_str.substr(0, str.size() - i);
        }
    }
    return "";
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    
    return 0;
}