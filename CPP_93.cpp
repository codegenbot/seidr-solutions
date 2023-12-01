#include <string>

string encode(string message){
    string encoded_message = "";
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                encoded_message += toupper(message[i]);
            }
            else{
                encoded_message += tolower(message[i]);
            }
            if(message[i] == 'a' || message[i] == 'A'){
                encoded_message += 'C';
            }
            else if(message[i] == 'e' || message[i] == 'E'){
                encoded_message += 'G';
            }
            else if(message[i] == 'i' || message[i] == 'I'){
                encoded_message += 'K';
            }
            else if(message[i] == 'o' || message[i] == 'O'){
                encoded_message += 'Q';
            }
            else if(message[i] == 'u' || message[i] == 'U'){
                encoded_message += 'W';
            }
            else{
                encoded_message += message[i];
            }
        }
        else{
            encoded_message += message[i];
        }
    }
    return encoded_message;
}