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
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    if (is_palindrome(text))
        std::cout << "The entered string is a palindrome." << std::endl;
    else
        std::cout << "The entered string is not a palindrome." << std::endl;
    
    return 0;
}