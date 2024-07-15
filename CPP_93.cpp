#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string encode(string message) {
    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            if (isupper(message[i])) {
                message[i] = tolower(message[i]);
            } else {
                message[i] = toupper(message[i]);
            }
            if (message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u') {
                message[i] = message[i] + 2;
            }
        }
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    return 0;
}