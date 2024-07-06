bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check for empty string
    char lastChar = txt.back(); // Get the last character of the string
    bool isLetter = isalpha(lastChar); // Check if the last character is a letter
    int i = 0;
    while(i < txt.length() && txt[i] != ' ') {
        i++;
    }
    return !isLetter && i == txt.length(); // Return true if not a letter and not part of word, false otherwise
}