#include <iostream>
#include <string>
using namespace std;

string encode(string message){
    for(char &c: message){
        if(isalpha(c)){
            c = isupper(c) ? tolower(c) : toupper(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItTg");
    return 0;
}