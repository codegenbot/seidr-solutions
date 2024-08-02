#include <iostream>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && std::isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    std::string text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, text);

    if (check_if_last_char_is_a_letter(text))
        std::cout << "Last character is a letter and there is a trailing space." << std::endl;
    else
        std::cout << "Last character is not a letter or there is no trailing space." << std::endl;

    return 0;
}