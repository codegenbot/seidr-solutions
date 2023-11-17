/*
Write a function that takes a message, and encodes in such a 
way that it swaps case of all letters, replaces all vowels in 
the message with the letter that appears 2 places ahead of that 
vowel in the english alphabet. 
Assume only letters. 

Examples:
>>> encode('test")
"TGST"
>>> encode("This is a message")
'tHKS KS C MGSSCGG"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string encode(string message){
    string result;
    for(int i = 0; i < message.length(); i++){
        if(isupper(message[i])){
            result += tolower(message[i]);
        }else if(islower(message[i])){
            result += toupper(message[i]);
        }
        if(isalpha(message[i])){
            if(tolower(message[i]) == 'a'){
                result += 'c';
            }else if(tolower(message[i]) == 'e'){
                result += 'g';
            }else if(tolower(message[i]) == 'i'){
                result += 'k';
            }else if(tolower(message[i]) == 'o'){
                result += 'q';
            }else if(tolower(message[i]) == 'u'){
                result += 'y';
            }else{
                result += message[i];
            }
        }
    }
    return result;
}
int main(){
    string message;
    getline(cin, message);
    cout<<encode(message)<<endl;
    return 0;
}
