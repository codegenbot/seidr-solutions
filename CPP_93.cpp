#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encode(string message){
    string encodedMessage = "";
    
    for(int i=0; i<message.length(); i++){
        char c = message[i];
        
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            }
            else{
                c = tolower(c);
            }
            
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
        
        encodedMessage += c;
    }
    
    return encodedMessage;
}

int main(){
    assert (encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT TqwRkTg");
    
    return 0;
}