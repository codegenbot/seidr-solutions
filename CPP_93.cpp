#include <string>

string encode(string message);

string encode(string message){
    for(char& c : message){
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c += 2;
            }
        }
    }
    return message;
}