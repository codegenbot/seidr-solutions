Here is the solution:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // Base case: If the string is empty, return false.
    int last_idx = txt.size() - 1;
    for (int i = 0; i < last_idx; i++) {
        if (!isspace(txt[i])) return false; // Check if any character before the last one is not a space.
    }
    char last_char = txt[last_idx];
    return isalpha(last_char); // Return whether the last character is an alphabetical character.
}