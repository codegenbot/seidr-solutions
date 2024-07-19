bool check_if_last_char_is_a_letter(string txt){
    int last_index = txt.length() - 1;
    if(last_index < 0) return false; // Check for empty string
    char last_char = txt[last_index];
    
    // Check if the last character is a space
    bool is_space = isspace(last_char);
    
    // Check if the last character is an alphabetical character
    bool is_letter = isalpha(last_char);
    
    return !is_space && is_letter;
}