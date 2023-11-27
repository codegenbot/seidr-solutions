bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        int spaceIndex = txt.find_last_of(' ');
        if(spaceIndex == string::npos){
            return true;
        }
        if(spaceIndex == txt.length()-1){
            return false;
        }
        return true;
    }
    return false;
}