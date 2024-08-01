#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encode(const std::string& message) {
    std::string encodedMessage = message;
    for (char& c : encodedMessage) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
            }
        }
    }
    return encodedMessage;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "j dQNt kNqW wHCt Tq WrKtG");

    return 0;
}