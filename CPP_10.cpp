#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string& str) {
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

std::string make_palindrome(const std::string& str) {
    std::string palindrome = str;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
            palindrome += std::string(str.rbegin(), str.rbegin() + str.size() - i);
            break;
        }
    }
    return palindrome;
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}