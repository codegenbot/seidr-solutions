bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0){
        return false;
    }
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        int spaceIndex = txt.find_last_of(' ');
        if(spaceIndex == string::npos){
            return true;
        }
        for(int i = spaceIndex + 1; i < txt.length(); i++){
            if(isalpha(txt[i])){
                return false;
            }
        }
        return true;
    }
    return false;
}