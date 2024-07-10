bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false; // Check for empty string
    char lastChar = txt.back(); // Get the last character of the string
    return (isalpha(lastChar) && !isalnum(lastChar)); // Check if it's an alphabetical character and not part of a word
}