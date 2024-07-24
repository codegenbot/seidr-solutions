#include <string>
#include <cctype>
#include <cassert>

std::string encode(std::string message){
    for(char &c : message){
        if(std::isalpha(c)){
            if(c >= 'a' && c <= 'z'){
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = char(c + 2);
            }
        }
    }
    return message;
}