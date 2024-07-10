bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.length() - 1);
    if (!isalpha(lastChar[0])) return false;
    for (int i = 0; i < txt.length() - 1; i++) {
        if (isspace(txt[i]) && !isalpha(txt[i + 1])) return true;
    }
    return false;
}