bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // If the string is empty, return false
    
    char lastChar = txt.back(); // Get the last character of the string
    if (!isalpha(lastChar)) return false; // Check if the last character is an alphabetical character
    
    int i = 0;
    bool inWord = false;
    while (i < txt.size()) {
        if (isspace(txt[i])) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
        }
        i++;
    }
    
    return !inWord; // Return true if the last character is not part of a word
}