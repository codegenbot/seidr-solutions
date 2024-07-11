bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // Check for empty string
    char lastChar = txt.back();
    if(isalpha(lastChar)) { // Check if the last character is alphabetical
        int i = txt.length() - 1;
        while(i > 0 && txt[i] == ' ') i--; // Find the start of the word
        if(txt.find(" ") == string::npos || i < txt.find(" ")) return true; // Check if the last char is not part of a word
    }
    return false;
}