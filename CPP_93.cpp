#include <iostream>
#include <cctype>
#include <string>

std::string encode(std::string message) {
    for(auto &c : message){
        if(std::isalpha(c)){
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItG");
    return 0;
}