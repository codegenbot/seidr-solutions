bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) {
        return false;
    }
    char lastChar = txt.back();
    string word = "";
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] != ' ') {
            word += txt[i];
        } else {
            if (!word.empty() && isalpha(lastChar)) {
                return false;
            }
            word = "";
        }
    }
    if (!word.empty() && isalpha(lastChar)) {
        return true;
    }
    return false;
}