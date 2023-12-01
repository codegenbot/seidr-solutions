#include <string>

std::string encode(std::string message);

int main() {
    std::string message;
    std::getline(std::cin, message);
    std::cout << encode(message) << std::endl;
    return 0;
}

std::string encode(std::string message) {
    std::string encodedMessage = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (std::isalpha(c)) {
            if (std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
                if (c > 'Z') {
                    c = c - 26;
                }
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}