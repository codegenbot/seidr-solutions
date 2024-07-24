#include <cctype>
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if (str.empty()) return false;
    char lastChar = str.back();
    return std::isalpha(lastChar);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true); 
    std::cout << "Check if the last character of a string is a letter: ";
    std::string str;  
    std::getline(std::cin, str);  // Remove leading and trailing whitespaces
    if (check_if_last_char_is_a_letter(str))
        std::cout << "The last character of the input string is a letter.\n";
    else
        std::cout << "The last character of the input string is not a letter.\n";
    return 0;
}