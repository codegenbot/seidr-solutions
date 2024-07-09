bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // If the string is empty, return false
    char lastChar = txt.back(); // Get the last character of the string
    bool isLetter = isalpha(lastChar); // Check if the last character is a letter
    bool isPartOfWord = txt.find(" ") == string::npos || txt.rfind(" ") != txt.size() - 1; // Check if the last character is part of a word
    return isLetter && !isPartOfWord; // Return true if the last character is a letter and not part of a word, false otherwise
}