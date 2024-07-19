#include <iostream>
#include <cctype>
#include <string>

std::string encode(const std::string& message) {
    std::string encodedMessage = message;
    
    for(auto &c : encodedMessage){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return encodedMessage;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    
    return 0;
}