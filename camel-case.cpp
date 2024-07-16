```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

// Function that joins tokens into a single string with spaces in between
std::string join(const std::vector<std::string>& tokens) {
    std::string result;
    for (const auto& token : tokens) {
        if (!result.empty()) {
            result += ' ';
        }
        result += token;
    }
    return result;
}

// Function that splits a string by delimiter and returns a vector of strings
std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}

// Function to convert kebab-case string into camelCase
std::string camelCase(const std::string& str) {
    std::vector<std::string> words = split(str, '-');
    
    if (words.empty()) {
        return "";
    }

    std::string result;
    for (char c : words[0]) {
        result += std::tolower(c);
    }
    for (int i = 1; i < words.size(); i++) {
        result += std::toupper(words[i][0]) + words[i].substr(1);
    }
    
    return result;
}

int main() {
    std::cout << camelCase("hello-world-example") << std::endl;
    return 0;
}