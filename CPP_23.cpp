#include <iostream>
#include <string>
#include <cstring>

size_t str_length(const std::string& str) {
    return strlen(str.c_str());
}

int main_new(){
    std::cout << "Enter a string: ";
    std::string input;
    while(std::cin >> input){
        if(input.empty()) {
            std::cout << "Error: Please enter a valid string. It seems you forgot to type something... Try again!" << std::endl;
        } else {
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