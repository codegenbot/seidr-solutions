string encode(string message){
    string encoded_message = message;
    for (char& c : encoded_message) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = char(c + 2);
            }
        }
    }
    return encoded_message;
}