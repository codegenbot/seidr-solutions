bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    int i = txt.size() - 1;
    while(i > 0 && txt[i-1] == ' ') i--;
    while(i < txt.size() && txt[i] == ' ') i++;
    char c = txt[i];
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}