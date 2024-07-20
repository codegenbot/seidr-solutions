bool check_if_last_char_is_a_letter(string txt) {
    if(txt.length() == 0)
        return false;
    for(int i = 0; i < txt.length(); i++) {
        if(i == txt.length() - 1 && isalpha(txt[i]))
            return true;
        else if(!isspace(txt[i])) {
            if(isalpha(txt[i]))
                return false;
        }
    }
    return false;
}