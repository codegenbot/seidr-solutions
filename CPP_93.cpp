string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = toupper(c);
            int offset = (c - base) % 26;
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                result += static_cast<char>(base + (offset + 2) % 26);
            } else {
                result += static_cast<char>(base + offset + 2);
            }
        } else {
            result += c;
        }
    }
    return result;
}