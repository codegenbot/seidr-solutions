#include <algorithm>
#include <cctype>

std::string encode(std::string message) {
    transform(message.begin(), message.end(), message.begin(), [](char c) {
        if(isalpha(c)){
            c = toupper(c);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = c + 2;
            }
            else{
                c = islower(c) ? toupper(c) : tolower(c);
            }
        }
        return c;
    });
    return message;
}