bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.size() - 1);
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] == ' ') {
            if (i + 1 >= txt.size() || !isalpha(txt[i + 1])) return false;
            break;
        }
    }
    return isalpha(lastChar[0]);
}