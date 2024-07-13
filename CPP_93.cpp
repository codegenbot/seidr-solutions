string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = toupper(c) == base ? tolower(c) : toupper(c);
            switch (c - base) {
                case 0:
                case 1:
                    result += c;
                    break;
                default:
                    if ((c - base) % 26 < 3)
                        result += 'a' + ((c - base) % 26);
                    else
                        result += 'A' + ((c - base) % 26) - 13;
            }
        } else {
            result += c;
        }
    }
    return result;
}