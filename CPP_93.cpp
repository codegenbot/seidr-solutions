#include <iostream>
#include <cctype>
#include <string>
#include <cassert>

std::string encode(std::string message){
    std::string encodedMessage = message;
    for(char& c : encodedMessage){
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c += 2;
            }
        }
    }
    return encodedMessage;
}

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    return 0;
}