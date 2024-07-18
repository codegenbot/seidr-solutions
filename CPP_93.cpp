Modify the code as 

#include <iostream>
#include <string>
#include <cassert>

std::string encode(std::string message) {
    for(auto &c : message){
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
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WrItE");
    return 0;
}