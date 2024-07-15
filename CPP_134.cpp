#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    int n = txt.size();
    if (n == 0) {
        return false;
    }
    char last_char = txt[n - 1];
    if (!std::isalpha(last_char)) {
        return false;
    }
    if (n >= 2 && txt[n - 2] != ' ') {
        return true;
    }
    return false;
}