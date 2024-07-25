string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = (int)c - 97; // Convert to 0-based index
            pos = (pos + 2 * 26) % 26; // Rotate the alphabet
            result += (char)(pos + 97); // Convert back to character and add to result
        } else if (c >= 'A' && c <= 'Z') {
            int pos = (int)c - 65; // Convert to 0-based index
            pos = (pos + 2 * 26) % 26; // Rotate the alphabet
            result += (char)(pos + 65); // Convert back to character and add to result
        } else {
            result += c; // If not a letter, just add it as is
        }
    }
    return result;
}