bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // If string is empty, last char doesn't exist, so return false.
    for(int i = 0; i < txt.length(); i++) {
        if(txt[i] == ' ') { // Check for space
            if(i+1 >= txt.length() || !isalpha(txt[i+1])) { // If this is the last space or next char isn't a letter, return false.
                return false;
            } else {
                return true; // If there's at least one more character after this space and it's a letter, return true.
            }
        }
    }
    if(isalpha(txt[txt.length()-1])) { // Check if last char is a letter
        return true;
    } else {
        return false; // If not, return false.
    }
}