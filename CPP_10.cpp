#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string& str) {
    return str == std::string(str.rbegin(), str.rend());
}

std::string make_palindrome(const std::string& str) {
    for (int i = str.size(); i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            return str + str.substr(0, i);
        }
    }
    return str;
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}