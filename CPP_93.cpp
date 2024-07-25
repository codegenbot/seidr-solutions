#include <string>
#include <cctype>

std::string encode(std::string message){
    std::string encodedMessage = "";
    for(char c : message){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encodedMessage += char(c + 2);
            } else {
                encodedMessage += c;
            }
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}

std::string encode(std::string message); 

assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");