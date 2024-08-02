bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_index = txt.size() - 1;
    char last_char = txt[last_index];
    return !isalnum(last_char);
}