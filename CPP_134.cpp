bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int i = txt.length() - 1;
    while (i >= 0 && isspace(txt[i])) i--;
    string word = txt.substr(0, i+1);
    char c = txt.back();
    return isalpha(c) && !word.empty();
}