#include <string>
#include <algorithm>

string encode(string message) {
    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            if (islower(message[i])) {
                message[i] = toupper(message[i]);
            } else {
                message[i] = tolower(message[i]);
            }
            if (message[i] == 'a' || message[i] == 'A') {
                message[i] = 'c';
            } else if (message[i] == 'e' || message[i] == 'E') {
                message[i] = 'g';
            } else if (message[i] == 'i' || message[i] == 'I') {
                message[i] = 'k';
            } else if (message[i] == 'o' || message[i] == 'O') {
                message[i] = 'q';
            } else if (message[i] == 'u' || message[i] == 'U') {
                message[i] = 'w';
            }
        }
    }
    return message;
}