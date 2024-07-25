#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string& s) {
    return s == std::string(s.rbegin(), s.rend());
}

std::string make_palindrome(const std::string& str) {
    int n = str.size();
    for(int i=n-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            std::string prefix = str.substr(0,i);
            std::reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}

int main() {
    assert (make_palindrome("jerry") == "jerryrrej");
    return 0;
}