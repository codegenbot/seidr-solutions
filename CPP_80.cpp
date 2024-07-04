#include <iostream>
#include <string>
#include <cassert>

bool is_happy(const std::string &s) {
    if (s.length() < 3) return false;
    for (size_t i = 0; i <= s.length() - 3; ++i) {
        if (s[i] == s[i+1] || s[i+1] == s[i+2] || s[i] == s[i+2]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    assert(is_happy("abcdef") == true);
    std::string input;
    std::cin >> input;
    std::cout << (is_happy(input) ? "Yes" : "No") << std::endl;
    return 0;
}