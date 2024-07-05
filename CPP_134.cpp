bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty() || !isalpha(txt.back())) return false;
    for (int i = txt.length() - 2; i >= 0; --i) {
        if (txt[i] == ' ') return true;
        if (isalpha(txt[i])) return false;
    }
    return true;
}