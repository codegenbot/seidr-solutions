#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            std::cout << (capitalize && islower(c) && (!isupper(c) || capitalize) ? (capitalize = false, (char)toupper(c)) : c);
            capitalize = false;
        }
    }
    
    return 0;
}