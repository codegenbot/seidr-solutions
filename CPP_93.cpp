for (char &c : message) {
        if (isalpha(c)) {
            c = (islower(c) ? toupper(c) : tolower(c));
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
            }
        }
    }
    return message;
}