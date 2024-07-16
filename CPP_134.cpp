#include <iostream>
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    std::string input_text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, input_text);

    bool result = check_if_last_char_is_a_letter(input_text);

    assert(result);

    return 0;
}