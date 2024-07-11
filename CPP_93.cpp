string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c <= base + 2 && c >= base) ? (isupper(c) ? 'Z' : 'z') : 
                (c == base + 3 || c == base + 4) ? c : 
                ((c - base + 1) % 26) + base;
        }
        result += c;
    }
    return result;
}