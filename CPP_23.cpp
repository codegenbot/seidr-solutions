#include <iostream>
#include <string>
#include <cstring>

size_t str_length(const std::string& str) {
    return str.size();
}

int main(){
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    if(input.empty()){
        std::cout << "Error: Please enter a valid string." << std::endl;
    } else {
        std::cout << "Length of the string is: " << str_length(input) << std::endl;
        std::cout << "Original string: " << input << std::endl;
    }
    return 0;
}