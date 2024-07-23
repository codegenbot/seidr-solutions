#include <cassert>
#include <iostream>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    bool containsNonSpace = false;
    for(int i = 0; i < txt.length(); i++) {
        if(!std::isspace(txt[i])) {
            containsNonSpace = true;
            break;
        }
    }
    return containsNonSpace && std::isalpha(txt.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true);
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    if(check_if_last_char_is_a_letter(input)) {
        std::cout << "The last character is a letter." << std::endl;
    } else {
        std::cout << "The last character is not a letter." << std::endl;
    }
    return 0;
}