#include <iostream>
#include <string>
#include <cassert>

std::string encode(std::string message);

std::string encode(std::string message){
    std::string encoded_message = message;
    for(char &c: encoded_message){
        if(std::isalpha(c)){
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return encoded_message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    
    return 0;
}