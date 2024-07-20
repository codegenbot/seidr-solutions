bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.size() - 1);
    for (char c : txt) {
        if (c == ' ') break;
        if (!isalpha(c)) return false;
    }
    return isalpha(lastChar[0]);
}