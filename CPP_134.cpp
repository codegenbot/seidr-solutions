bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;
    char lastChar = txt[txt.length() - 1];
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") == txt.length() - 1)
            return true;
        else
            return false;
    }
    return false;
}