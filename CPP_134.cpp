#include <iostream>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    std::string text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, text);

    assert(check_if_last_char_is_a_letter(text));

    return 0;
}