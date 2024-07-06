#include <string>

string flip_case(std::string str){
    string flipped = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]>96 && str[i]<123) {
            flipped += (char)(str[i] - 32);
        }
        else if(str[i]>64 && str[i]<91) {
            flipped += (char)(str[i] + 32);
        } 
        else{
            flipped += str[i];
        }
    }
    return flipped;
}