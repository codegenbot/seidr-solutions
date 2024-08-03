#include <string>

std::string encode(std::string message){
    std::string encoded_message = "";
    for(char& c : message){
        if(std::isalpha(c)){
            if(std::isupper(c)){
                c = std::tolower(c);
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = char(c + 2);
            }
            if(c == 'z'){
                c = 'b';
            }
            else{
                c = char(c + 1);
            }
            if(std::isupper(message)){
                c = std::toupper(c);
            }
        }
        encoded_message += c;
    }
    return encoded_message;
}