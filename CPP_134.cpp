Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    size_t pos = txt.find_last_of(" ");
    if (pos == string::npos) pos = txt.length();
    char lastChar = txt[pos - 1];
    return isalpha(lastChar);
}