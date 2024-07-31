bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // empty string has no last character
    char lastChar = txt.back();
    return isalpha(lastChar) && !isalnum(lastChar);
}