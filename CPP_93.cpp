std::string encode(const std::string& message) {
    std::string encodedMessage = message; 
    for (int i = 0; i < encodedMessage.length(); ++i) {
        if (isalpha(encodedMessage[i])) {
            if (islower(encodedMessage[i])) {
                encodedMessage[i] = toupper(encodedMessage[i]);
            } else {
                encodedMessage[i] = tolower(encodedMessage[i]);
            }
            if (encodedMessage[i] == 'A' || encodedMessage[i] == 'E' || encodedMessage[i] == 'I' || encodedMessage[i] == 'O' || encodedMessage[i] == 'U') {
                encodedMessage[i] += 2;
            }
        }
    }
    return encodedMessage;
}