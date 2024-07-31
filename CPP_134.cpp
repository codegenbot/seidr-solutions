bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // Check for empty string
    char lastChar = txt.back();
    if (!isalpha(lastChar)) return false; // Check if last character is alphabetical
    int i = 0;
    while (i < txt.length() && txt[i] != ' ') {
        i++;
    }
    if (i == txt.length()) return true; // If no space found, return true
    return false; // Return false otherwise
}