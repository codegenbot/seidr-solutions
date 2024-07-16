#include <iostream>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    std::string txt = "Sample text for testing ";
    assert(check_if_last_char_is_a_letter(txt) == true);

    txt = "Another sample text for testing 123";
    assert(check_if_last_char_is_a_letter(txt) == false);

    return 0;
}