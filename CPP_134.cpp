bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    
    char lastChar = txt.back();
    
    if(isalpha(lastChar)){
        size_t spacePos = txt.find_last_of(' ');
        if(spacePos == string::npos) return true;
        
        return spacePos == txt.size()-1;
    }
    
    return false;
}