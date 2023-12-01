#include <string>

std::string encode(std::string message) {
    std::string encodedMessage = "";

    for (int i = 0; i < message.length(); i++) {
        char c = message[i];

        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            }
            else {
                c = tolower(c);
            }

            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
            }
        }

        encodedMessage += c;
    }

    return encodedMessage;
}