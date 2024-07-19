#include <iostream>
#include <cctype>
#include <string>

std::string swap_case(const std::string& str) {
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::isprint(c))
            if(c >= 'a' && c <= 'z')
                result += std::toupper(c);
            else if(c >= 'A' && c <= 'Z')
                result += std::tolower(c);
            else
                result += c;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (!input.empty()) { 
        std::cout << "Computed output: " << swap_case(input) << std::endl;
        if(swap_case(input).compare("these violent delights have violent ends") == 0)
            return 0;
        else
            return 1;
    } else {
        std::cout << "Error: Input string is empty." << std::endl;
        return 2; 
    }
}