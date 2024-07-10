bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.length() - 1);
    return !isspace(lastChar[0]) && isalpha(lastChar[0]);
}