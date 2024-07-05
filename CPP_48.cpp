#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string& text) {
    int n = text.size();
    for(int i = 0; i < n / 2; ++i) {
        if(text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    // Additional tests can be added here
    std::string input;
    std::cin >> input;
    std::cout << (is_palindrome(input) ? "true" : "false") << std::endl;
    return 0;
}