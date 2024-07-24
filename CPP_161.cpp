string solve(string s) {
    string result = "";
    bool hasLetter = false;
    
    for (char c : s) {
        if (isalpha(c)) { // Check if character is a letter
            hasLetter = true;
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c; // Keep non-letter characters as they are
        }
    }
    
    return hasLetter ? result : string(rbegin(s), rend(s)); // Return the original reversed string if no letters were found
}