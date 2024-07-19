#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(std::string str) {
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::isprint(c))
            if(c >= 'a' && c <= 'z')
                result += (char)toupper(c);
            else if(c >= 'A' && c <= 'Z')
                result += (char)tolower(c);
            else
                result += c;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output = flip_case(input);
    std::cout << "Computed output: " << output << std::endl;
    
    assert(output == "these violent delights have violent ends");
    
    return 0;
}