bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1, 1);
    int firstSpace = txt.find_first_of(" ");
    if(firstSpace == -1 || firstSpace > txt.length() - 2)
        return isalpha(lastChar[0]);
    else
        return isalpha(lastChar[0]) && (firstSpace == txt.length() - 1);
}