string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 25) ? char(base + 25 - (c - base)) : char(base);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = char((c - 'a' + 2) % 26 + 'a');
            }
        }
        result += c;
    }
    return result;
}