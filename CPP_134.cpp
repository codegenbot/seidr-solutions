#include <iostream>
#include <string>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    return !txt.empty() && isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    std::string txt;
    std::getline(std::cin, txt);

    if (check_if_last_char_is_a_letter(txt)) {
        std::cout << "Last character is a letter." << std::endl;
    } else {
        std::cout << "Last character is not a letter." << std::endl;
    }

    return 0;
}