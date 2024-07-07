#include <iostream>
#include <string>

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != std::string::npos) {
        count++;
        pos += 9; // The length of the substring "I am bored"
    }
    std::cout << "The count of 'I am bored' in your string is: " << count << std::endl;
    return 0;
}