bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check for empty string
    char lastChar = txt.back(); // Get the last character of the string
    return isalpha(lastChar) && !ispunct(lastChar); // Check if it's a letter and not punctuation
}