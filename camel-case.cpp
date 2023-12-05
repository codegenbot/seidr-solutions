
```
#include <iostream>
#include <vector>
#include <string>

// Forward declaration of splitString and toCamelCase functions
std::vector<std::string> splitString(const std::string& str, char delimiter);
std::string toCamelCase(const std::string& str);

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

// Split a string into substrings using a delimiter
std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> words;
    size_t start = 0;
    size_t end = 0;
    
    while (end != std::string::npos) {
        end = str.find(delimiter, start);
        
        if (end == std::string::npos) {
            words.push_back(str.substr(start));
        } else {
            words.push_back(str.substr(start, end - start));
            start = end + 1;
        }
    }
    
    return words;
}

// Convert a string to camelCase
std::string toCamelCase(const std::string& str) {
    std::string output;
    for (int i = 0; i < str.size(); i++) {
        if (i == 0 || str[i] == '-') {
            output += toupper(str[i]);
        } else {
            output += tolower(str[i]);
        }
    }
    return output;
}
```