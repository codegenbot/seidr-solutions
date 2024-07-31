for (char &c : message) {
    if (isalpha(c)) {
        if (c >= 'a' && c <= 'z') {
            c = toupper(c);
        } else {
            c = tolower(c);
        }
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            if (c == 'A') c = 'C';
            else if (c == 'E') c = 'G';
            else if (c == 'I') c = 'K';
            else if (c == 'O') c = 'Q';
            else if (c == 'U') c = 'W';
        }
    }
}
return message;