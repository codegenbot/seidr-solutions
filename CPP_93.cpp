#include <string>
#include <cctype>

std::string encode(std::string message){
    std::string encoded_message = "";
    for(char c : message){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encoded_message += char(c + 2);
            } else {
                encoded_message += c;
            }
        } else {
            encoded_message += c;
        }
    }
    return encoded_message;
}

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq WkRtG");
    return 0;
}