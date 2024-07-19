#include <string>

std::string encode(std::string message){
    for(int i=0; i<message.size(); i++){
        if(isalpha(message[i])){
            message[i] = toupper(message[i]);
            if(message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U'){
                message[i] = message[i] + 2;
            }
            if(message[i] > 'Z'){
                message[i] = message[i] - 26;
            }
        }
    }
    return message;
}