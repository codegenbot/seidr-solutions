bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0){
        return false;
    }
    int lastSpaceIndex = txt.find_last_of(" ");
    char lastChar = txt.at(txt.length() - 1);
    if(lastChar >= 'a' && lastChar <= 'z' && lastSpaceIndex == string::npos){
        return true;
    }
    return false;
}