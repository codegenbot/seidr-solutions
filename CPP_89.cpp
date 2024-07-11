string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = c + 2 * 2;
            if (islower(c)) {
                if (encrypted > 'z') {
                    encrypted = encrypted - 26;
                }
            } else {
                if (encrypted > 'Z') {
                    encrypted = encrypted - 26;
                }
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}