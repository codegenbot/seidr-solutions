bool check_if_last_char_is_a_letter(string txt) {
    if(txt.length() == 0)
        return false;
    char lastChar = txt.back();
    bool isLastCharLetter = isalpha(lastChar);
    if(isLastCharLetter) {
        for(int i = 0; i < txt.length() - 1; i++) {
            if(!isspace(txt[i]) && !isalpha(txt[i]))
                return false;
        }
    }
    return isLastCharLetter;
}