string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            if (c == base) continue;
            int offset = tolower(c) - base;
            char newChar = (offset + 2) % 26 >= 13 ? (tolower(c) < 'n' ? 'a' : 'n') : (tolower(c) < 'w' ? 'm' : 'w');
            result += isupper(c) ? toupper(newChar) : tolower(newChar);
        } else {
            result += c;
        }
    }
    return result;
}