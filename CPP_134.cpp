bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // Check for empty string
    char lastChar = txt.back(); 
    if(!isalpha(lastChar)) return false; // Check if last character is alphabetical
    int startWord = -1, endWord = -1;
    bool inWord = false;
    for(int i = 0; i < txt.length(); i++) {
        if(!inWord && !isspace(txt[i])) { 
            startWord = i; 
            inWord = true; 
        } else if(inWord && isspace(txt[i])) {
            endWord = i - 1;
            inWord = false;
        }
    }
    if(endWord >= txt.length() - 1 || endWord < startWord) return false; // Check if last character is not part of word
    return true;
}