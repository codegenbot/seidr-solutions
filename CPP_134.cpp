bool check_if_last_char_is_a_letter(string txt){
    int len = txt.length();
    if (len == 0) {
        return false;
    }
    char lastChar = txt[len - 1];
    if (!isalpha(lastChar)) {
        return false;
    }
    if (len > 1 && isalpha(txt[len - 2])) {
        return false;
    }
    return true;
}