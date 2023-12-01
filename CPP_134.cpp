bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0){
        return false;
    }
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        int spaceIndex = txt.find_last_of(" ");
        if(spaceIndex == string::npos){
            return true;
        }
        string lastWord = txt.substr(spaceIndex + 1);
        if(lastWord.length() == 1){
            return true;
        }
    }
    return false;
}