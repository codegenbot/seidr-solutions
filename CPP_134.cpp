bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // base case: empty string
    char lastChar = txt.back(); // get the last character
    return isalpha(lastChar) && (!isalnum(lastChar)); // check if alphabetical and not alphanumeric
}