bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty() || !isalpha(txt.back())) return false;
    int i = txt.size() - 2;
    while (i >= 0 && txt[i] == ' ') i--;
    return i < 0 || txt[i] == ' ';
}