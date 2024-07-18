#include <iostream>
#include <string>
#include <cctype>

std::string encode(std::string message) {
    for (auto &c : message) {
        if (isalpha(c)) {
            c = isupper(c) ? tolower(c) : toupper(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c += 2;
            }
        }
    }
    return message;
}

int main() {
    std::string input_message;
    std::cout << "Enter a message: ";
    std::getline(std::cin, input_message);

    std::string encoded_message = encode(input_message);
    std::cout << "Encoded message: " << encoded_message << std::endl;

    return 0;
}