string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'A' && c <= 'E') {
                c = (c - 65 + 3) % 26 + 65;
            } else if (c >= 'I' && c <= 'O') {
                c = (c - 79 + 2) % 26 + 79;
            } else if (c >= 'U' && c <= 'Y') {
                c = (c - 85 + 3) % 26 + 85;
            }
        }
        result += tolower(c);
    }
    return result;
}