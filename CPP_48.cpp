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
    // Add your code here to test the function
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    if (is_palindrome(input))
        std::cout << input << " is a palindrome." << std::endl;
    else
        std::cout << input << " is not a palindrome." << std::endl;

    return 0;
}