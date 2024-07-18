#include <iostream>
#include <string>

std::string encode(std::string message) {
    for(auto &c : message){
        if(std::isalpha(c)){
            c = std::isupper(c) ? std::tolower(c) : std::toupper(c);
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