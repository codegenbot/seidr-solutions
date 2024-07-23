string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char newChar = c + 2 * (c - 'a' + 1);
            if (isupper(c)) {
                if (newChar > 'Z') {
                    newChar = 'A' + (newChar - 'Z' - 1);
                }
            } else {
                if (newChar > 'z') {
                    newChar = 'a' + (newChar - 'z' - 1);
                }
            }
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}