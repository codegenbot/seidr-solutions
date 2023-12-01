#include <string>

string encode(string message);

int main() {
    // code
    return 0;
}

string encode(string message){
    string encodedMessage = "";
    for(int i = 0; i < message.length(); i++){
        char c = message[i];
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            }
            else{
                c = tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
                if(c > 'Z'){
                    c = c - 26;
                }
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}