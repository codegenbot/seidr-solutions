Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // Check if the string is empty
    char lastChar = txt.back();
    return isalpha(lastChar) && !isalnum(txt.back()); 
}