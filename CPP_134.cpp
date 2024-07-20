bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string last_char = txt.substr(txt.length() - 1);
    return !isspace(last_char[0]) && isalpha(last_char[0]);
}