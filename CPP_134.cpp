Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_index = txt.size() - 1;
    if (!isalpha(txt[last_index])) return false;
    for (int i = 0; i < last_index; i++) {
        if (txt[i] == ' ') break;
        if (txt[i] != txt[last_index]) return false;
    }
    return true;
}