#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::string join(const std::vector<std::string>& tokens) {
    std::string result;
    for (const auto& token : tokens) {
        if (!result.empty()) {
            result += " ";
        }
        result += token;
    }
    return result;
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    std::string tempStr = str; // Create a copy of the original string
    while ((pos = tempStr.find(delimiter)) != std::string::npos) {
        tokens.push_back(tempStr.substr(0, pos));
        tempStr = tempStr.substr(pos + 1);
    }
    if (!tempStr.empty()) {
        tokens.push_back(tempStr);
    }
    return tokens;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> words = split(str, '-');
    
    if (words.empty()) {
        return "";
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result += " ";
        } else {
            result += std::toupper(words[i][0]);
        }
        result += words[i].substr(1);
    }
    
    return result;
}

int main() {
    std::cout << camelCase("hello-world-example") << std::endl;
    return 0;
}