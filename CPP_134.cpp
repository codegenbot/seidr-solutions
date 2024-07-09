bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // If the string is empty
    char lastChar = txt.back(); // Get the last character of the string
    return isalpha(lastChar) && (!any_of(txt.begin(), prev(txt.end()), ::isspace)); // Check if it's an alphabetical character and not part of a word
}