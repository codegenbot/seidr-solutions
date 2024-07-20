bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int i = txt.size() - 1;
    while (i > 0 && isspace(txt[i])) i--;
    if (!isalpha(txt[i])) return false;
    int j = i - 1;
    while (j >= 0 && isspace(txt[j])) j--;
    if (j >= 0 && !isspace(txt[j+1])) return true;
    return false;
}