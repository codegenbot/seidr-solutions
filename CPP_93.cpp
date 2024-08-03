#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    return message;
}

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
}