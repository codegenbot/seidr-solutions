transform(message.begin(), message.end(), message.begin(), [](char c) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = char((c - 'A' + 2) % 26 + 'A');
            }
            else {
                c = islower(c) ? toupper(c) : tolower(c);
            }
        }
        return c;
    });
    return message;
}