bool check_if_last_char_is_a_letter(string txt){
    int n = txt.length();
    if (n == 0) {
        return false;
    }
    char lastChar = txt[n-1];
    if (isalpha(lastChar)) {
        if (n == 1 || txt[n-2] == ' ') {
            return true;
        }
    }
    return false;
}