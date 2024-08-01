#include <string>
#include <cctype>
#include <cassert>

std::string encode(std::string message){
    std::string result = "";
    for(char c : message){
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = std::toupper(c);
            }else{
                c = std::tolower(c);
            }
            if(c == 'A') c = 'C';
            else if(c == 'E') c = 'G';
            else if(c == 'I') c = 'K';
            else if(c == 'O') c = 'Q';
            else if(c == 'U') c = 'W';
        }
        result += c;
    }
    return result;
}