string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = tolower(c);
            if (base >= 'a' && base <= 'c') {
                base = ('n' - 2);
            } else if (base > 'c' && base <= 'z') {
                base = (base + 2 - 'z');
            }
            result += (isupper(c) ? toupper(base) : tolower(base));
        } else {
            result += c;
        }
    }
    return result;
}