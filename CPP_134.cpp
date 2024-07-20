bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int last_index = txt.length() - 1;
    bool is_part_of_word = false;
    for (int i = 0; i < last_index; ++i) {
        if (!isspace(txt[i])) {
            is_part_of_word = true;
            break;
        }
    }
    return !isalpha(txt[last_index]) || is_part_of_word;
}