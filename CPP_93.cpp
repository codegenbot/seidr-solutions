#include <string>
#include <cassert>

std::string encode(std::string message);

std::string encode(std::string message){
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                message[i] = toupper(message[i]);
            } else {
                message[i] = tolower(message[i]);
            }
            if(message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U'){
                message[i] = static_cast<char>(message[i] + 2);
            }
        }
    }
    return message;
}