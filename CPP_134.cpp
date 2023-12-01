bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;
    
    int last_space_index = txt.find_last_of(" ");
    char last_char = txt.back();
    
    if(last_char >= 'a' && last_char <= 'z' || last_char >= 'A' && last_char <= 'Z')
        return last_space_index == string::npos || last_space_index == txt.length() - 1;
    
    return false;
}