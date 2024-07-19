#include <iostream>
#include <string>

std::string flipCase(std::string input) {
    for(int i = 0; i < input.length(); ++i) {
        if(input[i] >= 'a' && input[i] <= 'z') {
            output += (input[i] - 32); // Convert to uppercase
        }
        else if(input[i] >= 'A' && input[i] <= 'Z') {
            output += (input[i] + 32); // Convert to lowercase
        } else {
            output += input[i]; // If not an alphabet letter, add as it is
        }
    }
    return output;
}

int main_function() -> int {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output = flipCase(input); 
    std::cout << output << std::endl;
    return 0; 
}