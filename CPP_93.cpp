string encode(string message){
    for (char &c : message) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
        if (c == 'a' || c == 'A') c = (c == 'a') ? 'C' : 'c';
        if (c == 'e' || c == 'E') c = (c == 'e') ? 'G' : 'g';
        if (c == 'i' || c == 'I') c = (c == 'i') ? 'K' : 'k';
        if (c == 'o' || c == 'O') c = (c == 'o') ? 'Q' : 'q';
        if (c == 'u' || c == 'U') c = (c == 'u') ? 'W' : 'w';
    }
    return message;
}