bool check_if_last_char_is_a_letter(string txt) {
    if (txt.length() == 0)
        return false;

    bool isWord = true;
    for (int i = 0; i < txt.length() - 1; i++) {
        if (!isspace(txt[i])) {
            isWord = false;
            break;
        }
    }

    return isWord && !isalpha(0, txt.back());
}