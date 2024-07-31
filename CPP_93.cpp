#include <iostream>
#include <string>
#include <cassert>

std::string encode(std::string message);

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    return 0;
}

std::string encode(std::string message){
    std::string encodedMessage = message;
    for (char& c : encodedMessage) {
        if (std::isalpha(c)) {
            if (std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    return encodedMessage;
}