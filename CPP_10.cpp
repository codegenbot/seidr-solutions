#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

bool is_palindrome(std::string str) {
    return str == std::string(str.rbegin(), str.rend());
}

std::string make_palindrome(std::string str) {
    int n = str.length();
    for(int i=n-1;i>=0;i--){
        if(is_palindrome(str.substr(i))){
            return str + std::string(str.rbegin(), str.rbegin() + n - i);
        }
    }
    return str;
}

int main() {
    assert (make_palindrome("jerry") == "jerryrrej");
    return 0;
}