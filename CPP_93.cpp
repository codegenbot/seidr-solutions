#include <iostream>
#include <string>
#include <algorithm>

std::string encode(std::string message) {
    for (int i = 0; i < message.length(); i++) {
        if (std::isalpha(message[i])) {
            if (std::islower(message[i])) {
                message[i] = std::toupper(message[i]);
            } else {
                message[i] = std::tolower(message[i]);
            }
            
            switch (message[i]) {
                case 'A':
                    message[i] = 'C';
                    break;
                case 'E':
                    message[i] = 'G';
                    break;
                case 'I':
                    message[i] = 'K';
                    break;
                case 'O':
                    message[i] = 'Q';
                    break;
                case 'U':
                    message[i] = 'W';
                    break;
            }
        }
    }
    
    return message;
}

int main() {
    std::string message;
    std::cout << "Enter a message: ";
    std::getline(std::cin, message);
    
    std::string encodedMessage = encode(message);
    std::cout << "Encoded message: " << encodedMessage << std::endl;
    
    return 0;
}