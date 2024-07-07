bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false;
    string last_char = txt.substr(txt.length()-1, 1);
    bool is_alphabetic = (last_char.length() > 0 && isalpha(toupper(last_char[0])));
    int i = 0;
    while(i < txt.length()) {
        if(!isspace(txt[i])) break;
        i++;
    }
    return is_alphabetic && i == txt.length();
}