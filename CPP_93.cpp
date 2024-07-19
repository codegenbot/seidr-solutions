#include <iostream>
#include <string>
using namespace std;

std::string encode(std::string message) {
    std::string encoded_message = message;
    for (char& c : encoded_message) {
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
            }
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    return encoded_message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    return 0;
}