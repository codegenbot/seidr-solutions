#include <iostream>
#include <cctype>
#include <cassert>

std::string encode(std::string message){
    for(char& c : message){
        if(std::isalpha(c)){
            c = std::isupper(c) ? std::tolower(c) : std::toupper(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = c + 2;
            }
        }
    }
    return message;
}

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "K DqNt KnQw WhCt Tq WrKtG");
    std::cout << "Test passed successfully.\n";
    return 0;
}