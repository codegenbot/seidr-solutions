string encode(string message) {
    transform(message.begin(), message.end(), message.begin(), [](char c) {
        if (isalpha(c)) {
            if (islower(c)) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    return (c - 'a' + 2) % 26 + 'a';
                }
                return toupper(c);
            } else if (isupper(c)) {
                if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    return (c - 'A' + 2) % 26 + 'A';
                }
                return tolower(c);
            }
        }
        return c;
    });

    return message;
}