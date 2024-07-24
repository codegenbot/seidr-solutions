#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = false;
    for (char& c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ' && capitalize) {
            c = std::toupper(c);
            capitalize = false;
        }
    }
    
    std::cout << input << std::endl;
    
    return 0;
}