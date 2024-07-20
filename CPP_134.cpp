bool check_if_last_char_is_a_letter(string txt) {
    int last_pos = txt.length() - 1;
    if (last_pos < 0)
        return false;

    char last_char = txt[last_pos];
    if (!isalpha(last_char))
        return false;

    for (int i = 0; i < last_pos; i++) {
        if (isspace(txt[i]) || isalpha(txt[i])) {
            return true;
        }
    }

    return false;
}