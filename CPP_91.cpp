```
#include <iostream>
#include <string>

size_t findPattern(const std::string& input) {
    int count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != std::string::npos) {
        count++;
        pos += 7; // The length of the substring "I am bored"
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = findPattern(input);
    std::cout << "The count of 'I am bored' in your string is: " << result << std::endl;
    return 0;
}