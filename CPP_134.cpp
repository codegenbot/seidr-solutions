#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    int lastCharIndex = txt.size() - 1;
    if (lastCharIndex < 0)
        return false;

    char lastChar = txt[lastCharIndex];
    if (!isalpha(lastChar))
        return false;

    for (int i = 0; i < lastCharIndex; i++) {
        if (isspace(txt[i]) && !ispunct(txt[i + 1])) {
            return true;
        }
    }

    return false;
}