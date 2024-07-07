#include <iostream>
#include <string>

int str_length(std::string str){
    return str.length();
}

int main(){
    std::cout << "Enter a string: ";
    std::string input;
    char c;
    while(std::cin >> c) {
        input += c;
    }
    if(input.empty()){
        std::cout << "Error: Please enter a valid string." << std::endl;
    } else {
        std::cout << "Length of the string is: " << str_length(input) << std::endl;
    }
    return 0;
}