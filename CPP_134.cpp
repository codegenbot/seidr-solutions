bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // Check if the string is empty
    
    char last_char = txt.back(); // Get the last character of the string
    bool is_part_of_word = false;
    
    for(int i = 0; i < txt.length() - 1; i++) { // Iterate through the string until the second last character
        if(txt[i] == ' ') {
            is_part_of_word = true;
            break;
        }
    }
    
    return (isalpha(last_char) && !is_part_of_word); // Check if the last character is an alphabetical character and not part of a word
}