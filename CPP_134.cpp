bool check_if_last_char_is_a_letter(string txt) {
    int length = txt.length();
    if (length == 0) {
        return false;
    }
    char lastChar = txt[length - 1];
    if (!isalpha(lastChar)) {
        return true;
    }
    for (int i = 0; i < length - 1; ++i) {
        if (isspace(txt[i]) && isalpha(txt[i + 1])) {
            return false;
        }
    }
    return true;
}