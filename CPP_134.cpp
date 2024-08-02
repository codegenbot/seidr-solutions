bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    size_t last_idx = txt.size() - 1;
    char last_char = txt[last_idx];
    while (last_idx > 0 && isspace(txt[last_idx - 1])) {
        --last_idx;
    }
    string word = txt.substr(0, last_idx);
    if (!word.empty()) return !isalpha(last_char);
    return false;
}