bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty()) {
        return false;
    }
    char last_char = txt.back();
    if (isalpha(last_char) && !isalnum(txt[txt.size() - 2]) && txt[txt.size() - 2] != ' ') {
        return true;
    } else {
        return false;
    }
}