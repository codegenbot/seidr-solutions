#include <iostream>
#include <string>
using namespace std;

string encode(string message);

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
}

string encode(string message){
    for(int i=0; i<message.size(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                message[i] = toupper(message[i]);
            } else {
                message[i] = tolower(message[i]);
            }
            if(message[i]=='a' || message[i]=='e' || message[i]=='i' || message[i]=='o' || message[i]=='u'){
                message[i] = message[i] + 2;
            }
        }
    }
    return message;
}