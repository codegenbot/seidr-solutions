bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check for empty string
    
    char lastChar = txt.back(); // Get the last character of the string
    bool isLetter = isalpha(lastChar); // Check if the last character is a letter
    
    // Check if the last character is not part of a word (i.e., it's followed by a space)
    for(int i = 0; i < txt.length() - 1; i++){
        if(txt[i] != ' ') break;
        if(txt[i + 1] == lastChar) return false; // If the last character is part of a word, return false
    }
    
    return isLetter && !txt.back(); // Return true if the last character is a letter and not part of a word
}