bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // check if string is empty
    char lastChar = txt.back(); // get the last character of the string
    return isalpha(lastChar) && !isalnum(lastChar); // check if it's a letter and not part of a word
}