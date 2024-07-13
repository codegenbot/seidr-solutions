#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    std::string output = "";
    
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c == ' ') {
            capitalize = false;
            output += ' ';
        } else {
            if (capitalize) {
                output += std::toupper(c);
                capitalize = false;
            } else {
                output += c;
            }
        }
    }

    std::cout << output << std::endl;

    return 0;
}