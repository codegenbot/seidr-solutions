bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    bool isLastCharALetter = isalpha(lastChar);
    return !isLastCharALetter || (txt.find(lastChar) == string::npos);
}