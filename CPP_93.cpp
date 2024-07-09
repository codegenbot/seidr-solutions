string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = ((c - base + 2) % 26) + base;
            if (c == 'z' || c == 'Z') {
                c -= 2;
            }
        }
        result += c;
    }
    return result;
}