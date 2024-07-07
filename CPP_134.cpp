Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    int len = txt.length();
    if (len == 0) return false;
    char lastChar = txt[len - 1];
    return isalpha(lastChar) && !isalnum(lastChar);
}