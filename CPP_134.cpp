bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // base case for empty string
    char lastChar = txt.back(); // get the last character of the string
    return isalpha(lastChar) && !isalnum(lastChar); // check if the last char is alphabetical and not alphanumeric (i.e., part of a word)
}