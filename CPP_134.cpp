bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int len = txt.length();
    char lastChar = txt[len - 1];
    for (int i = 0; i < len - 1; i++) {
        if (txt[i] == ' ') return false;
    }
    return isalpha(lastChar);
}