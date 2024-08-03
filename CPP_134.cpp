bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    for (int i = 0; i < txt.length(); i++) {
        if (!isalpha(txt[i])) break;
    }
    return i == txt.length() - 1 && !isalnum(txt.back());
}