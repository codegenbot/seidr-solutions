bool check_if_last_char_is_a_letter(string txt){
    int length = txt.length();
    if (length == 0) {
        return false;
    }
    char lastChar = txt[length - 1];
    if (isalpha(lastChar) && (length == 1 || txt[length - 2] == ' ')) {
        return true;
    }
    return false;
}