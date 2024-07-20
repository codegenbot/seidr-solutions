transform(message.begin(), message.end(), message.begin(), [](char c) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
            }
            if (c > 'Z') {
                c = c - 26;
            }
            return islower(c) ? tolower(c) : c;
        }
        return c;
    });
    return message;
}