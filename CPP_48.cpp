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
    std::cout << std::boolalpha;

    std::cout << is_palindrome("racecar") << std::endl;
    std::cout << is_palindrome("hello") << std::endl;

    return 0;
}