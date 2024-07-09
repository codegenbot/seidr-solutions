bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // Check for empty string
    char lastChar = txt.back(); // Get the last character of the string
    bool lastCharIsAlpha = isalpha(lastChar); // Check if the last character is alphabetical
    bool isPartOfWord = false;
    for (int i = 0; i < txt.length() - 1; i++) {
        if (!isspace(txt[i])) { // If character is not a space, it's part of a word
            isPartOfWord = true;
            break;
        }
    }
    return lastCharIsAlpha && !isPartOfWord; // Return the result
}