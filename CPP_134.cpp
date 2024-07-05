bool check_if_last_char_is_a_letter(string txt){
    int n = txt.size();
    if (n == 0 || txt[n-1] == ' ') return false;
    if (isalpha(txt[n-1])) {
        for (int i = n-2; i >= 0; --i) {
            if (txt[i] == ' ') return true;
            if (isalpha(txt[i])) return false;
        }
        return true;
    }
    return false;
}