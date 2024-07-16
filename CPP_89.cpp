string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = c + 2 * 2;
            if (islower(c)) {
                if (encrypted > 'z') {
                    encrypted = encrypted - 'z' + 'a' - 1;
                }
            } else {
                if (encrypted > 'Z') {
                    encrypted = encrypted - 'Z' + 'A' - 1;
                }
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}