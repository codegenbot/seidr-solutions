bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // If the string is empty, return false
    char lastChar = txt.back(); // Get the last character of the string
    int i;
    for(i=0;i<txt.length()-1&&!isspace(txt[i]);i++); // Check if the last character is part of a word
    return !isalpha(lastChar) || i == txt.length() - 1; // Return true if the last character is not alphabetical or it's part of a word
}