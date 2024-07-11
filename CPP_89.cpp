string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = 'a' + (c - 'a' + 2 * 2) % 26;
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}