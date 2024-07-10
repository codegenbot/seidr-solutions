bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int lastIndex = txt.size() - 1;
    char lastChar = txt[lastIndex];
    return isalpha(lastChar) && !isalnum(txt[lastIndex]);
}