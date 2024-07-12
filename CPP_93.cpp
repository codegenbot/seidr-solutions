string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char newChar;
            if (islower(c)) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    newChar = (char)(((c - 'a' + 2) % 26) + 'a');
                } else {
                    newChar = (char)(c + ('a' - 'a'));
                }
            } else if (isupper(c)) {
                if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    newChar = (char)(((c - 'A' + 2) % 26) + 'A');
                } else {
                    newChar = (char)(c + ('A' - 'A'));
                }
            }
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}