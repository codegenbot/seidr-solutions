bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // Check for empty string
    char lastChar = txt.back();
    bool isLetter = isalpha(lastChar);
    return !isSpace(txt.back()) && isLetter;
}

bool isSpace(char c) {
    return c == ' ';
}