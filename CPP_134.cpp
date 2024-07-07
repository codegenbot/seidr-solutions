bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check if string is empty
    for(int i = 0; i < txt.size() - 1; i++) {
        if(!isspace(txt[i])) { // Check if character is not a space
            return false;
        }
    }
    char last_char = txt.back();
    return (isalpha(last_char)); // Check if last character is alphabetical
}