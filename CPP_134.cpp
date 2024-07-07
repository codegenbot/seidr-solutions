bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1);
    if(lastChar.find_first_not_of(" ") == string::npos) return false;
    return isalpha(lastChar[0]);
}