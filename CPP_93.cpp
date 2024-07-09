string encode(string message){
    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            message[i] = toupper(message[i]);
            if (message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U') {
                message[i] = char(int(message[i]) + 2);
            }
            if (message[i] == 'Z') {
                message[i] = 'B';
            } else if (isalpha(message[i])) {
                message[i] = char(int(message[i]) + 1);
            }
        }
    }
    return message;
}