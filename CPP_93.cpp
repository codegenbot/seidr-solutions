#include <iostream>
#include <string>
#include <cassert>

std::string encode(std::string message){
    std::string encodedMessage = "";
    for(int i=0; i<message.length(); i++){
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
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}

int main(){
    assert (encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    std::cout << encode("I DoNt KnOw WhAt tO WrItE") << std::endl;
    return 0;
}