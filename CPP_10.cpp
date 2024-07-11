#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string& s) {
    return std::equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
}

std::string make_palindrome(const std::string& str) {
    if (str.empty()) return "";
    int n = str.size();
    for (int i = n - 1; i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
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