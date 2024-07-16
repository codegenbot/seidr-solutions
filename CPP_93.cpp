string encode(string message){
    for (char& c : message) {
        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            if (c == 'a') {
                c = 'c';
            } else if (c == 'e') {
                c = 'g';
            } else if (c == 'i') {
                c = 'k';
            } else if (c == 'o') {
                c = 'q';
            } else if (c == 'u') {
                c = 'w';
            }
        }
    }
    return message;
}