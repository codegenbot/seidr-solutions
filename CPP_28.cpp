```
#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "";
    }
    
    std::string result = strings[0];
    
    for (size_t i = 1; i < strings.size(); ++i) {
        result += ", " + strings[i];
    }
    
    return result;
}

int main 
{
    int numStrings;

    // Read the number of strings from the user
    std::cout << "Enter the number of strings: ";
    std::cin >> numStrings;

    if(numStrings < 1) {
        std::cout << "Error: Number of strings must be a positive integer." << std::endl;
        return -1;
    }

    // Read the strings from the user
    for (int i = 0; i < numStrings; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        if(str.empty()) {
            std::cout << "Warning: String cannot be empty. Skipping this string." << std::endl;
        } else {
            std::vector<std::string> input;
            input.push_back(str);
        }
    }

    // Concatenate the strings
    std::cout << "Concatenated strings: " << concatenate(input) << std::endl;

    return 0;
}