#include <string> // Add this line to include the string header

std::string flip_case(std::string str){ // Update function name from 'string' to 'std::string'
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        } else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    return str;
}