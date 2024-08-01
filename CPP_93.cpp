string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = static_cast<char>(base + ((c - base) % 26 + 2) % 26);
            } else {
                c = static_cast<char>(base + ((c - base) % 26 + 2) % 26);
            }
        }
        result += c;
    }
    return result;
}