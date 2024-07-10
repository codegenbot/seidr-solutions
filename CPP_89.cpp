string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = (int)c - 97; // Convert to 0-based index
            pos = (pos + 2 * 2) % 26; // Shift down by 4 places
            result += (char)(pos + 97); // Convert back to character
        } else if (c >= 'A' && c <= 'Z') {
            int pos = (int)c - 65; // Convert to 0-based index
            pos = (pos + 2 * 2) % 26; // Shift down by 4 places
            result += (char)(pos + 65); // Convert back to character
        } else {
            result += c;
        }
    }
    return result;
}