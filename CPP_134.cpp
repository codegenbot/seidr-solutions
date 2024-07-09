bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; 
    char lastChar = txt.back();
    for(int i=0; i<txt.length()-1; i++){
        if(txt[i] == ' ' && txt[i+1] == lastChar) return false;
    }
    return isalpha(lastChar);
}