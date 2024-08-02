string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = toupper(c);
            int shift = (c - base >= 'N') ? 2 : ('Z' - base);
            result += (base + ((c - base) % 26 + shift)) % 26;
        } else {
            result += c;
        }
    }
    return result;
}