#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encode(const std::string &message){
    std::string encodedMessage = message;
    for (char &c : encodedMessage) {
        if (std::isalpha(c)) {
            c = std::isupper(c) ? std::tolower(c) : std::toupper(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
            }
        }
    }
    return encodedMessage;
}

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRtTg");
    return 0;
}