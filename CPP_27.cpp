#include <string>
#include <cctype>

std::string flip_case(std::string str){
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::isalpha(c)) {
            if(std::islower(c))
                result += std::toupper(c);
            else
                result += std::tolower(c);
        }
        else
            result += c;
    }
    return result;
}