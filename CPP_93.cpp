string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == toupper(base)) ? tolower(c) : toupper(c);
            switch (c - base) {
                case 0:
                case 1:
                case 3:
                case 5:
                    c = base + 2;
                    break;
                default:
                    c = base + ((c - base) % 26 + 2) % 26;
                    break;
            }
        }
        result += c;
    }
    return result;
}