bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    for(int i=0; i<txt.length(); i++) {
        if(txt[i] == ' ' && i+1 < txt.length() && txt[i+1] == lastChar) return false;
    }
    return isalpha(lastChar);
}