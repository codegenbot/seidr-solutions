```c++
#include <iostream>
#include <string>

int str_length(std::string str){
    return str.length();
}

int main(){
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    bool isValid = false;
    for (char c : input) {
        if (isdigit(c)) { 
            isValid = true;
            break; 
        }
    }
    if (!isValid) {
        std::cout << "Error: Please enter a valid string." << std::endl;
    } else {
        int num = 0;
        for (char c : input) {
            num = num * 10 + (c - '0'); 
        }
        std::cout << "Length of the number is: " << str_length(std::to_string(num)) << std::endl;
    }
    return 0;
}