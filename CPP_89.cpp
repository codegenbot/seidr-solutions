string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int index = (int)c - 97; // Convert to 0-based indexing
            index = (index + 2 * 2) % 26; // Rotate alphabet down by 4 places
            result += (char)(index + 97); // Convert back to uppercase letter
        } else if (c >= 'A' && c <= 'Z') {
            int index = (int)c - 65; // Convert to 0-based indexing
            index = (index + 2 * 2) % 26; // Rotate alphabet down by 4 places
            result += (char)(index + 65); // Convert back to uppercase letter
        } else {
            result += c;
        }
    }
    return result;
}