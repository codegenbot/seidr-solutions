#include <iostream>
#include <string>

size_t str_length(const std::string& str) {
    return str.size();
}

int main(){
    std::cout << "Enter a string: ";
    std::string input;
    std::string line;
    while (std::getline(std::cin, line)) {
        if(line.empty()) {
            std::cout << "Error: Please enter a valid string. It seems you forgot to type something... Try again!" << std::endl;
        } else {
            input = line; 
            break;
        }
    }

    if(input.empty()){
        return 1; 
    }

    std::cout << "Length of the string is: " << str_length(input) << std::endl;
    std::cout << "Original string: " << input << std::endl;

    return 0;
}