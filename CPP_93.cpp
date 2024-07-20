
#include <iostream>
#include <string>
#include <cassert>

std::string encode(std::string message){
    for(char &c : message){
        if(isalpha(c)){
            if(isupper(c)){
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return message;
}

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    return 0;
}