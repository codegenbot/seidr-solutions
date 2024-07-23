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

int testConcatenate() {
    std::vector<std::string> input;
    int numStrings;

    // Read the number of strings from the user
    std::cout << "Enter the number of strings: ";
    std::cin >> numStrings;

    // Read the strings from the user
    for (int i = 0; i < numStrings; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        input.push_back(str);
    }

    // Concatenate the strings
    std::cout << "Concatenated strings: " << concatenate(input) << std::endl;

    return 0;
}