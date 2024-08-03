#include <iostream>
#include <string>
#include <cctype>

std::string encode(std::string message){
    for(char &c : message){
        if(std::isalpha(c)){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c += 2;
            }
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    return message;
}

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    // Add more test cases if needed
    return 0;
}