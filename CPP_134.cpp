Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    int length = txt.length();
    if (length == 0)
        return false;
    char lastChar = txt[length - 1];
    if (!isalpha(lastChar))
        return false;
    for (int i = 0; i < length - 1; ++i) {
        if (txt[i] == ' ')
            return false;
    }
    return true;
}