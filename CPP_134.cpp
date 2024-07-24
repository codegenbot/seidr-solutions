```cpp
#include <iostream>
#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    return isalpha(lastChar);
}

int main() {
    std::cout << "Check if the last character of a string is a letter: ";
    std::string txt;
    std::cin >> txt;
    if (check_if_last_char_is_a_letter(txt))
        std::cout << "The last character of the input string is a letter.\n";
    else
        std::cout << "The last character of the input string is not a letter.\n";
    return 0;
}