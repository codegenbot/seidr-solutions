string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = tolower(c);
            if (base == 'a' || base == 'e' || base == 'i' || base == 'o' || base == 'u') {
                base += 2;
                if (base > 'z')
                    base -= 26;
            } else if (isupper(c)) {
                base = toupper((base - 'a' + 2) % 26 + 'a');
            } else {
                base = tolower((base - 'a' + 2) % 26 + 'a');
            }
            result += base;
        } else {
            result += c;
        }
    }
    return result;
}