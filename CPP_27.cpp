#include <cassert>
#include <string>
#include <cctype>

std::string flip_case(std::string str){
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}