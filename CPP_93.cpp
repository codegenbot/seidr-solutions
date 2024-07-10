#include <iostream>
#include <string>

using namespace std;

string encode(string message){
    for(int i=0; i<message.size(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                message[i] = toupper(message[i]);
            } else {
                message[i] = tolower(message[i]);
            }
            if(message[i]=='A' || message[i]=='E' || message[i]=='I' || message[i]=='O' || message[i]=='U'){
                message[i] += 2;
            }
        }
    }
    return message;
}

int main(){
    // Test the encode function
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "K DqNt KnQw WkCt Tq WrKtG");

    return 0;
}