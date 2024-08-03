bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_idx = txt.size() - 1;
    char last_char = txt[last_idx];
    for (int i = 0; i < last_idx; ++i) {
        if (isspace(txt[i])) {
            if (isalpha(last_char)) return false;
            return true;
        }
    }
    if (!isalpha(last_char)) return false;
    return true;
}