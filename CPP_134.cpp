bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false; // Check for empty string
    char lastChar = txt.back(); // Get the last character
    bool isLetter = isalpha(lastChar); // Check if the last character is a letter
    bool isPartOfWord = (txt.find(" ") != std::string::npos || txt.find("\n") != std::string::npos) && !isWhitespace(lastChar);
    return isLetter && !isPartOfWord;
}