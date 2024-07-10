bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string last_char = txt.substr(txt.size() - 1);
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] == ' ') break;
    }
    int start = i + 1;
    for (int i = start; i < txt.size(); i++) {
        if (txt[i] == ' ') return false;
    }
    string word = txt.substr(start);
    return isalpha(last_char[0]);
}