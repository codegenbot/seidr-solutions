bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)) {
        for(int i = 0; i < txt.length() - 1; i++) {
            if(!isspace(txt[i])) return true;
        }
    }
    return false;
}