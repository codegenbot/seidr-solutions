string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 25) ? 
                (char)(base + ((c - base + 1) % 26)) :
                (char)(base + ((c - base + 2) % 26));
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = (char)((c - base + 2) % 26 + base);
            }
        }
        result += c;
    }
    return result;
}