bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1, 1);
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == '\0') {
            if(i != txt.length() - 1 && txt.substr(i+1).find(lastChar) == string::npos)
                return true;
            else
                return false;
        }
    }
    return false;
}