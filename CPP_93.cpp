string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            if (isupper(c)) {
                char newChar = 'a' + ((c - 'A') % 26);
                result += tolower(newChar);
            } else {
                char newChar = 'A' + ((c - 'a') % 26);
                result += toupper(newChar);
            }
        } else {
            result += c;
        }
    }
    return result;
}