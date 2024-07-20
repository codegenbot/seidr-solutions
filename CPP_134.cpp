bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.size()-1);
    bool isLetter = (lastChar[0] >= 'a' && lastChar[0] <= 'z') || (lastChar[0] >= 'A' && lastChar[0] <= 'Z');
    if(isLetter){
        for(int i=0; i<txt.size()-1; i++){
            if(txt[i] == ' ' || txt[i] < 'a' || txt[i] > 'z' || txt[i] < 'A' || txt[i] > 'Z'){
                return false;
            }
        }
    }
    return isLetter;
}