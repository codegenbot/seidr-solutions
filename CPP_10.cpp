#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string& str) {
    return str == std::string(str.rbegin(), str.rend());
}

std::string make_palindrome(const std::string& str) {
    if(str.empty()) return str;
    int n = str.size();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))){
            return str + std::string(str.rbegin(), str.rbegin() + n-i);
        }
    }
    return str + std::string(str.rbegin() + 1, str.rend());
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}