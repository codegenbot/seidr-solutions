#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    // Split the input string into words using "-" as delimiter
    std::vector<std::string> words = split(input, '-');
    
    // Convert each word to camelCase and join them together
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

// Split a string into substrings using a delimiter
std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> words;
    size_t start = 0;
    size_t end = str.find(delimiter);
    
    while (end != std::string::npos) {
        words.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }
    
    if (start < str.size()) {
        words.push_back(str.substr(start));
    }
    
    return words;
}

// Convert a string to camelCase
std::string toCamelCase(const std::string& str) {
    std::string output = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            output += " ";
        } else {
            output += str[i];
        }
    }
    
    return output;
}