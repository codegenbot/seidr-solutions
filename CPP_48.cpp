#include <iostream>
#include <string>

bool is_palindrome(const std::string& text) {
    int i = 0, j = text.length() - 1;
    while (i < j) {
        if (text[i] != text[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    std::cout << is_palindrome("radar") << std::endl;  // Output: 1
    std::cout << is_palindrome("hello") << std::endl;  // Output: 0

    return 0;
}