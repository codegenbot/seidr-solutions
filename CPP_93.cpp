string encode(string message){
    string encoded_message = message;
    
    for (char& c : encoded_message) {
        if (isalpha(c)) {
            c = isupper(c) ? tolower(c) : toupper(c);
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
    
    return encoded_message;
}