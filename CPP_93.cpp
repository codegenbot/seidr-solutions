#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encode(string message){
    string encodedMessage = "";
    for(char c : message){
        if(isalpha(c)){
            if(islower(c)){
                encodedMessage += toupper(c);
            } else {
                encodedMessage += tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encodedMessage += char((c + 2 - 'A') % 26 + 'A');
            } else {
                encodedMessage += c;
            }
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}

int main(){
    assert (encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    return 0;
}