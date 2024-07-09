bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    int i = txt.size() - 1;
    while(i > 0 && isspace(txt[i])) i--;
    char lastChar = txt[i];
    bool isLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z');
    return !isspace(lastChar) && isLetter;
}