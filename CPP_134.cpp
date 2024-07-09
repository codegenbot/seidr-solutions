bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int i = txt.length() - 1;
    while (i > 0 && isspace(txt[i])) i--;
    return !isspace(txt[i]) && isalpha(txt[i]);
}