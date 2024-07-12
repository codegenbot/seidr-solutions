bool check_if_last_char_is_a_letter(string txt) {
    if (txt.length() == 0) {
        return false;
    }
    
    char lastChar = txt.back();
    bool isLastCharLetter = isalpha(lastChar);
    
    if (!isalpha(txt.back())) {
        return true;
    }
    
    int i = txt.length()-2;
    while(i >= 0 && txt[i] == ' ') {
        i--;
    }
    return isLastCharLetter;
}