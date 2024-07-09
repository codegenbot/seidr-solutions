bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // If string is empty, return false
    
    char lastChar = txt.back(); // Get the last character of the string
    int spaceCount = 0; // Initialize a counter for spaces in the string
    
    for(int i = 0; i < txt.size() - 1; i++) {
        if(txt[i] == ' ') {
            spaceCount++; 
        }
    }
    
    return isalpha(lastChar) && (spaceCount % 2 != 0); // Check if last character is a letter and not part of a word
}