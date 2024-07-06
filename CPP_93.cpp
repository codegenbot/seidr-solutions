string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char newChar;
            if (islower(c)) {
                newChar = 'a' + ((c - 'a') + 2) % 26;
            } else {
                newChar = 'A' + ((c - 'A') + 2) % 26;
            }
            result += tolower(newChar);
        } else {
            if (isprint(c)) {
                result += c;
            }
        }
    }
    return result;
}