bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false; // Check for empty string
    char lastChar = txt.back();
    if(!isalpha(lastChar)) return false; // Check if last character is alphabetical
    int i = txt.length() - 2;
    while(i >= 0 && isspace(txt[i])) {i--;} // Find the start of the previous word
    if(i < 0 || !isspace(txt[i])) return true; // If no space found or first char, return true
    return false;
}