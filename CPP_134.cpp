bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    int lastSpace = txt.find_last_of(' ');
    if(lastSpace == -1) lastSpace = txt.length();
    char c = txt.at(txt.length() - 1);
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') return (txt.length() - 1 > lastSpace);
    return false;
}