#include <string>

string flip_case(string str){
    string flipped = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z') {
            flipped += toupper(c);
        }
        else if (c >= 'A' && c <= 'Z'){
            flipped += tolower(c);
        }
        else{
            flipped += c;
        }
    }
    return flipped;
}