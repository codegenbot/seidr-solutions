bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // If the string is empty, return false
    
    char lastChar = txt.back(); // Get the last character of the string
    for(int i = 0; i < txt.length() - 1; i++){
        if(txt[i] == ' ' && txt[i+1] == lastChar) return false; // If the last character is a space, check if it's part of a word
    }
    
    return isalpha(lastChar); // Check if the last character is an alphabetical character
}