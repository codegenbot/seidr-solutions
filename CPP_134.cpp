bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1);
    return (lastChar.size() == 1 && isalpha((int)lastChar[0])) &&
           (!isalpha((int)txt[0]) || !isalpha((int)txt[txt.length()-2]));
}