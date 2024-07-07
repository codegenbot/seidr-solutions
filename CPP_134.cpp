bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; 
    char lastChar = txt.back();
    string word;
    bool inWord = false;
    
    for(char c : txt) {
        if(c == ' ') {
            inWord = false;
        } else {
            word += c;
            inWord = true;
        }
    }
    
    return (isalpha(lastChar) && !inWord);
}