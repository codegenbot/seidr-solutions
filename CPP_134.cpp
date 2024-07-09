#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !isalpha(txt.back()) && txt.size() > 0 && txt[txt.size() - 2] == ' ';
}

int main() {
    assert(check_if_last_char_is_a_letter("Hello World ") == true);
    assert(check_if_last_char_is_a_letter("12345") == false);

    return 0;
}