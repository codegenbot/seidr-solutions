#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string encode(std::string message){
    std::transform(message.begin(), message.end(), message.begin(), [](char c) {
        if(std::isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                return char(int(c) + 2);
            } else {
                if(std::islower(c)){
                    return std::toupper(c);
                } else {
                    return std::tolower(c);
                }
            }
        }
        return c;
    });
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItIg");
    return 0;
}