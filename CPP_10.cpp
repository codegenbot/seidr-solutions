#include <iostream>
#include <string>
#include <cassert>

std::string make_palindrome(std::string str){
    if(str.empty()) return str;
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && str[i] != str[0]) {
        i--;
    }
    std::string prefix = str.substr(0, i+1);
    std::string palindrome_suffix = str.substr(i+1);
    std::string prefix_reverse(prefix.rbegin(), prefix.rend());
    return str + prefix_reverse;
}

int main() {
    assert (make_palindrome("jerry") == "jerryrrej");
    return 0;
}