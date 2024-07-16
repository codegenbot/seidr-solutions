for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            if (tolower(message[i]) == 'a' || tolower(message[i]) == 'e' || tolower(message[i]) == 'i' || tolower(message[i]) == 'o' || tolower(message[i]) == 'u') {
                message[i] = (char)(((tolower(message[i]) - 'a' + 2) % 26) + 'a');
            }
            message[i] = islower(message[i]) ? toupper(message[i]) : tolower(message[i]);
        }
    }
    return message;
}