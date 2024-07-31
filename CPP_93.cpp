#include <string>
#include <cassert>

std::string encode(std::string message){
    std::string encodedMessage = "";
    for (char& c : message) {
        if (c >= 'a' && c <= 'z') {
            encodedMessage += static_cast<char>(std::toupper(c) + 1);
        } else if (c >= 'A' && c <= 'Z') {
            encodedMessage += static_cast<char>(std::tolower(c) + 2);
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}