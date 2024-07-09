bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.size() - 1);
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] == ' ') break;
        if (i + lastChar.size() > txt.size() || txt.substr(i, 1) != lastChar)
            return false;
    }
    return isalpha(txt[txt.size()-1]);
}