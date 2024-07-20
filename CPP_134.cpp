bool check_if_last_char_is_a_letter(string txt) {
    int len = txt.length();
    if(len == 0)
        return false;
    char lastChar = txt[len-1];
    for(int i = 0; i < len - 1; i++) {
        if(txt[i] == ' ' && txt[i+1] == lastChar) 
            return false;
    }
    return isalpha(lastChar);
}