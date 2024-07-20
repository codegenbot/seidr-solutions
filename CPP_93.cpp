for (char &c : message) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = ((c - 'a' + 2) % 26) + 'a';
            }
        }
    }
    return message;
}