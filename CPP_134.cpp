bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check for empty string
    char lastChar = txt.back(); // Get the last character of the string
    bool isLastCharLetter = isalpha(lastChar); // Check if the last character is a letter
    
    if(!isLastCharLetter) return false; // If not, it's not a letter so return false
    size_t lastWordEnd = txt.find_last_of(" "); // Find the end of the last word
    return (lastWordEnd == string::npos || lastWordEnd == txt.size() - 1); // Check if the last character is part of the last word
}