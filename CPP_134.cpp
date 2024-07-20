bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_index = txt.length() - 1;
    char last_char = txt[last_index];
    for (int i = 0; i < last_index; i++) {
        if (txt[i] == ' ') break;
    }
    if (i != last_index) return isalpha(last_char);
    return false;
}