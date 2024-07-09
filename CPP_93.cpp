#include <iostream>
#include <cassert>
#include <cctype>

std::string encode(std::string message) {
    for (int i = 0; i < message.length(); ++i) {
        if (isalpha(message[i])) {
            message[i] = islower(message[i]) ? toupper(message[i]) : tolower(message[i]);
            if (message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U') {
                message[i] += 2;
            }
        }
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItTg");
    return 0;
}