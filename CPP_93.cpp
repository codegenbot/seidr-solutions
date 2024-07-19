#include <string>
#include <iostream>
#include <cctype>
#include <cassert>

std::string encode(std::string message){
    std::string encoded_message = message;
    for (char& c : encoded_message) {
        if (std::isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
            }
            if (std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    return encoded_message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    return 0;
}