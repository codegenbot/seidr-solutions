bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    string word = "";
    for (char c : txt) {
        if (c == ' ') {
            if (!word.empty() && isalpha(lastChar)) return true;
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && isalpha(lastChar)) return true;
    return false;
}