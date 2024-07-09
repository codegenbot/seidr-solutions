bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // If string is empty, it's not a letter
    for(int i = 0; i < txt.length(); i++) {
        if(i == txt.length() - 1 && isalpha(txt[i])) return true; // Check last char and return true if it's a letter
        else if(!isblank(txt[i])) break; // If we're not at the end of string and current char is not blank, we can stop checking
    }
    return false;
}