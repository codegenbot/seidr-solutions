bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        int i = txt.size() - 2;
        while(i >= 0 && txt[i] != ' '){
            i--;
        }
        if(i < 0 || txt[i] == ' '){
            return true;
        }
    }
    return false;
}