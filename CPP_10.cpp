#include <iostream>
#include <string>
#include <assert.h>

std::string make_palindrome(std::string str){
    std::string rev_str(str.rbegin(), str.rend());
    for (int i = 0; i < str.size(); ++i) {
        if (str.substr(0, str.size() - i) == rev_str.substr(i)) {
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}