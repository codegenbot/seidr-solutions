string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 25) ? c : base;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = char((base - 'a' + 2) % 26 + 'a');
            } else if (c >= 'A' && c <= 'E' && c >= 'I' && c <= 'O' && c >= 'U') {
                c = char((base - 'A' + 2) % 26 + 'A');
            }
        }
        result += c;
    }
    return result;
}