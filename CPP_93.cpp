#include <string>
#include <cctype>
#include <cassert>

std::string encode(std::string message) {
    std::string encodedMessage = "";
    
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        
        if (std::isalpha(c)) {
            if (std::islower(c)) {
                c = std::toupper(c);
            }
            else {
                c = std::tolower(c);
            }
            
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c += 2;
            }
        }
        
        encodedMessage += c;
    }
    
    return encodedMessage;
}