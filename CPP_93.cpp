#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encode(std::string message);

int main() {
    assert (encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    return 0;
}

std::string encode(std::string message){
    std::string encodedMessage = "";
    for(char& c : message){
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}