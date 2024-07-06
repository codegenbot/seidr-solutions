#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    // Ask for user input
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    std::string result = flip_case(str);
    std::cout << "The flipped case is: " << result << std::endl;
    return 0;
}