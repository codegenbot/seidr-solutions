#include<iostream>
using namespace std;

string encode(string message){
    string encodedMessage = "";
    
    for(int i=0; i<message.length(); i++){
        if(isalpha(message[i])){
            // Swap the case of letter
            if(isupper(message[i])){
                encodedMessage += tolower(message[i]);
            }
            else{
                encodedMessage += toupper(message[i]);
            }

            // Replace vowels with the letter that appears 2 places ahead
            char c = encodedMessage.back();
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                
                encodedMessage.pop_back();
                encodedMessage += c + 2;
            }
        }
        else{
            encodedMessage += message[i];
        }
    }
    return encodedMessage;
}

int main(){
    string message;
    
    cout << "Enter a message: ";
    getline(cin, message);
    
    cout << "Encoded message: " << encode(message) << endl;
    
    return 0;
}