bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) {
        return false;
    }
    int last_index = txt.length() - 1;
    for (int i = 0; i < last_index; i++) {
        if (!isspace(txt[i])) {
            return !isalpha(txt[last_index]);
        }
    }
    return isalpha(txt[last_index]);
}