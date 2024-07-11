bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // If string is empty, return false
    
    char lastChar = txt.back(); // Get the last character of the string
    int wordStartIndex = 0;
    
    for(int i = 0; i < txt.length(); ++i) {
        if(!isalnum(txt[i])) { // If current character is not alphanumeric
            if(i != txt.length() - 1) wordStartIndex = i + 1; // Update the start of the next word
        } else if(i == txt.length() - 1) return isalpha(lastChar); // Check if last char is a letter
    
    }
    
    return false;
}