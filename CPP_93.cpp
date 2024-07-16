for (char &c : message) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c += 2;
            }
        }
    }
    return message;
}