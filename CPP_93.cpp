#include <string>
#include <cctype>

std::string encode(std::string message){
    for (char& c : message) {
        if (std::isalpha(c)) {
            if (std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c = c + 2;
            }
        }
    }
    return message;
}