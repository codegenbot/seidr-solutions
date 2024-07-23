#include <cassert>
#include <iostream>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    bool containsNonSpace = false;
    for(int i = 0; i < txt.length(); i++) {
        if(!std::isspace((char)txt[i])) {
            containsNonSpace = true;
            break;
        }
    }
    return containsNonSpace && std::isalpha((char)txt.back());
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if(check_if_last_char_is_a_letter(input))
        std::cout << "The last character of the entered string is a letter." << std::endl;
    else
        std::cout << "The last character of the entered string is not a letter." << std::endl;
}