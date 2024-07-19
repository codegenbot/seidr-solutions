string encode(string message){
    for (char &c : message) {
        if (isalpha(c)) {
            c = isupper(c) ? tolower(c) : toupper(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
                if (c > 'z') {
                    c = c - 26; // wrap around
                }
            }
        }
    }
    return message;
}