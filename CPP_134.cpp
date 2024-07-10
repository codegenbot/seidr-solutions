bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1, 1);
    for(int i=0; i<txt.length()-1; i++){
        if(txt[i] == ' ' && txt.substr(i+1).find(lastChar) != string::npos)
            return false;
    }
    return isalpha(lastChar[0]);
}