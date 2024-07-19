#include <iostream>
#include <string>

std::string flipCase(const std::string& input) {
    std::string output = "";
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output = flipCase(input); 
    std::cout << output << std::endl;
    return 0; 
}