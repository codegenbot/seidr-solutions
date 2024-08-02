bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.length() - 1);
    bool isLetter = isalpha(lastChar[0]);
    return !isalpha(txt.rfind(' ')) && isLetter;
}