#include <iostream>
#include <string>
#include <algorithm>

std::string encode(std::string message) {
    std::string encodedMessage = "";

    for (char c : message) {
        if (isalpha(c)) {
            if (islower(c)) {
                encodedMessage += toupper(c);
            } else {
                encodedMessage += tolower(c);
            }

            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                encodedMessage += c + 2;
            }
        } else {
            encodedMessage += c;
        }
    }

    return encodedMessage;
}

int main() {
    std::string message;
    std::cout << "Enter a message: ";
    std::getline(std::cin, message);

    std::cout << "Encoded message: " << encode(message) << std::endl;

    return 0;
}