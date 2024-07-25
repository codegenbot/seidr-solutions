string encode(string message){
    string encoded_message = message;
    transform(encoded_message.begin(), encoded_message.end(), encoded_message.begin(), [](char c) {
        if (isalpha(c)) {
            c = isupper(c) ? tolower(c) : toupper(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
            }
        }
        return c;
    });
    return encoded_message;
}