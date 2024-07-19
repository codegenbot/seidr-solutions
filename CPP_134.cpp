#include <algorithm>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    return std::isalpha(lastChar) && !std::isalnum(txt.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true);
    return 0;
}