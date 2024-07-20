bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check if string is empty
    char lastChar = txt.back(); // Get the last character of the string
    bool isLastCharLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z'); // Check if last char is a letter
    return !isLastCharLetter; // Return false if last char is not a letter, otherwise true
}