bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    int last_index = txt.length() - 1;
    if(!isalpha(txt[last_index])) return true;
    for(int i = 0; i < last_index; i++) {
        if(' ' == txt[i]) {
            return !isalpha(txt[last_index]);
        }
    }
    return false;
}