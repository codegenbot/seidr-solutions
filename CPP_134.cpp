bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int lastCharIndex = txt.length() - 1;
    char lastChar = txt[lastCharIndex];
    bool isLetter = isalpha(lastChar);
    bool isPartOfWord = false;
    for (int i = 0; i < lastCharIndex; i++) {
        if (!isspace(txt[i])) {
            isPartOfWord = true;
            break;
        }
    }
    return isLetter && !isPartOfWord;
}