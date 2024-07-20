bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) {
        return false;
    }
    string lastChar = txt.substr(txt.size() - 1);
    if (!isalpha(lastChar[0])) {
        return false;
    }
    for (int i = 0; i < txt.size() - 1; i++) {
        if (txt[i] == ' ') {
            if (txt.substr(i + 1).find(lastChar) != string::npos) {
                return false;
            }
            break;
        }
    }
    return true;
}