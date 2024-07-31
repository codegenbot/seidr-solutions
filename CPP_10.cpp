#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

bool is_palindrome(const std::string& str) {
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

std::string make_palindrome(std::string str){
    if(str.empty()) return "";
    int n = str.size();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))) {
            std::string prefix = str.substr(0, i);
            std::reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return "";
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}