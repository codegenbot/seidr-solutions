#include <iostream>
#include <string>
#include <cctype>

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
    std::string input;
    std::cout << "Enter a message: ";
    std::getline(std::cin, input);
    
    std::string encodedMessage = encode(input);
    
    std::cout << "Encoded message: " << encodedMessage << std::endl;
    
    return 0;
}