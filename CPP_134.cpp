bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // If the string is empty, it's false
    
    char last_char = txt.back(); // Get the last character of the string
    return isalpha(last_char) && (!any_of(txt.begin(), prev(txt.end()), ::isspace)); // Check if the last character is a letter and not part of a word
}