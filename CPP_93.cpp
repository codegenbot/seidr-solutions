string encode(string message) {
    for (char &c : message) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
            if (c == 'A' || c == 'a') c = 'C';
            else if (c == 'E' || c == 'e') c = 'G';
            else if (c == 'I' || c == 'i') c = 'K';
            else if (c == 'O' || c == 'o') c = 'Q';
            else if (c == 'U' || c == 'u') c = 'W';
        }
    }
    return message;
}