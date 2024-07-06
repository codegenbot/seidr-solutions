string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == toupper(base)) ? tolower(c) : toupper(c);
            switch (c - base) {
                case 0:
                case 1:
                    result += c;
                    break;
                default:
                    result += char((c - base + 2) % 26 + base);
            }
        } else {
            result += c;
        }
    }
    return result;
}