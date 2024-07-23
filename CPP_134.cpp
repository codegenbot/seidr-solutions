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
    std::cout << (check_if_last_char_is_a_letter(std::cin.getline(std::getchar, 256)) ? "The last character is a letter" : "The last character is not a letter") << std::endl;
    return 0;
}