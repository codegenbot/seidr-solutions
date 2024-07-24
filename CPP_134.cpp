bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;

    char lastChar = txt.back();
    bool isLetter = isalpha(lastChar);

    // Check if the last character is part of a word
    int i = 0;
    while (i < txt.length() && !isspace(txt[i])) {
        i++;
    }

    if (i == txt.length()) return isLetter;

    return false;
}