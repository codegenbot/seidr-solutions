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
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (is_palindrome(str)) {
        std::cout << str << " is a palindrome.\n";
    } else {
        std::cout << str << " is not a palindrome.\n";
    }
    return 0;
}