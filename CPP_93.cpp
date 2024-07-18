string encode(string message){
    string encoded_message = message;
    transform(encoded_message.begin(), encoded_message.end(), encoded_message.begin(), [](char c) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c += 2;
            }
        }
        return c;
    });
    return encoded_message;
}