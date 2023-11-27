#include <iostream>
#include <string>
#include <algorithm>

std::string encode(std::string message) {
    std::string encodedMessage = "";
    for (char& c : message) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                c += 2;
                if (c > 'Z') {
                    c -= 26;
                }
            }
        }
        encodedMessage += c;
    }
    return encodedMessage;
}