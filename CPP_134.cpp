bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;
    int lastIdx = txt.length() - 1;
    char lastChar = txt[lastIdx];
    if(isalpha(lastChar) && (lastIdx == 0 || txt[lastIdx - 1] == ' '))
        return true;
    return false;
}