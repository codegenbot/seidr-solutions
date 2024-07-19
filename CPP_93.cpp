#include <iostream>
#include <string>

using namespace std;

string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if(c == 'A') c = 'C';
            else if(c == 'E') c = 'G';
            else if(c == 'I') c = 'K';
            else if(c == 'O') c = 'Q';
            else if(c == 'U') c = 'W';
        }
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItTg");
    return 0;
}