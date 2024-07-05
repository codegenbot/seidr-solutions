#include <cctype>

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || isspace(txt.back())) return false;
    size_t last_alpha = txt.find_last_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    return last_alpha != string::npos && (last_alpha + 1 == txt.size() || isspace(txt[last_alpha + 1]));
}