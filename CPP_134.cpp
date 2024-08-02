Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_index = txt.size() - 1;
    for (int i = 0; i < last_index; i++) {
        if (!isspace(txt[i])) return false;
    }
    return isalpha(txt[last_index]);
}