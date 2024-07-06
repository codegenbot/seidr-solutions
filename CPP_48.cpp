#include <iostream>
#include <string>

bool is_palindrome(const std::string& text) {
    int len = text.length();
    for (int i = 0; i <= len / 2; i++) {
        if (text[i] != text[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    if (is_palindrome(input))
        std::cout << "The entered string is palindrome.";
    else
        std::cout << "The entered string is not palindrome.";
    
    return 0;
}