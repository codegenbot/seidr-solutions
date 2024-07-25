string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int pos = (int)c - 97; // convert to 0-based index
            pos = (pos + 2 * 26) % 26; // rotate alphabet by 8 places
            result += (char)(pos + 97); // convert back to character
        } else if (c >= 'A' && c <= 'Z') {
            int pos = (int)c - 65; // convert to 0-based index
            pos = (pos + 2 * 26) % 26; // rotate alphabet by 8 places
            result += (char)(pos + 65); // convert back to character
        } else {
            result += c;
        }
    }
    return result;
}