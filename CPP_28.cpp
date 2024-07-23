```cpp
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
    std::vector<std::string> input;
    int numStrings;

    // Read the number of strings from the user
    std::cout << "Enter the number of strings: ";
    std::cin >> numStrings;

    if(numStrings < 1) {
        std::cerr << "Error: Number of strings must be at least 1. Try again." << std::endl;
        return -1;
    }

    // Read the strings from the user
    for (int i = 0; i < numStrings; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        input.push_back(str);
    }

    // Concatenate the strings
    if(input.size() > 0) {
        std::cout << "Concatenated strings: " << concatenate(input) << std::endl;
    }
    else {
        std::cerr << "Warning: No strings entered. Nothing to concatenate." << std::endl;
    }

    return 0;
}