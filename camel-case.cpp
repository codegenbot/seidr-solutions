
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::vector<std::string> splitString(const std::string& str, char delimiter) {
    // Implementation of the function here
}

std::string toCamelCase(const std::string& str) {
    // Implementation of the function here
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    // Split the input string into words using "-" as the delimiter
    std::vector<std::string> words = splitString(input, '-');
    
    // Convert each word to camelCase and join them together with a space
    std::string output;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            output += " ";
        }
        output += toCamelCase(words[i]);
    }
    
    // Print the output string
    std::cout << output << std::endl;
    
    return 0;
}