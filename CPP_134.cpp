bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.size()-1, 1);
    for(int i=0; i<txt.size(); i++){
        if(txt[i] == ' ' && (i == txt.size() - 1 || txt[i+1] != ' ')){
            if(lastChar[0] >= 'a' && lastChar[0] <= 'z' || lastChar[0] >= 'A' && lastChar[0] <= 'Z')
                return true;
        }
    }
    return false;
}