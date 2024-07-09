#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !isalpha(txt.back()) && txt.size() > 0 && txt[txt.size() - 2] == ' ';
}

check_if_last_char_is_a_letter(txt);