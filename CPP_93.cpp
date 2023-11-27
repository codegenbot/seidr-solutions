#include <iostream>
#include <string>

using namespace std;

string encode(string message);

int main() {
    string message;
    cout << "Enter a message: ";
    cin >> message;
    cout << "Encoded message: " << encode(message) << endl;
    return 0;
}

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
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}