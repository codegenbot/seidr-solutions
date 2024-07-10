bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int lastCharIndex = txt.length() - 1;
    char lastChar = txt[lastCharIndex];
    return isalpha(lastChar) && !isalnum(txt[lastCharIndex]);
}