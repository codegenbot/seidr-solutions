bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // If string is empty, return false
    char lastChar = txt.back(); // Get the last character of the string
    bool isLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z'); // Check if it's a letter
    bool isPartOfWord = false;
    for(int i=0; i<txt.size()-1; i++){ // Iterate through the string to check if it's part of a word
        if(txt[i] == ' ') {
            isPartOfWord = true;
            break;
        }
    }
    return isLetter && !isPartOfWord; // Return true if last character is a letter and not part of a word, false otherwise
}