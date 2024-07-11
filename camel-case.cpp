#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (c == '-' || c == ' ') {
            capitalize = true;
        } else {
            std::cout << ((capitalize && islower(c) && !isupper(c)) ? (char)toupper(c) : c);
            capitalize = false;
        }
    }
    
    return 0;
}