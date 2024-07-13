#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    std::stringstream iss(input + " "); 
    std::string word;
    std::string result;

    for (std::string word; iss >> word; ) {
        if (!result.empty()) {
            result += char(std::toupper(word[0]));
            for (int i = 1; i < word.size(); ++i)
                result += char(std::tolower(word[i]));
        } else {
            result = std::move(word);
        }
        if (word.find('-') != std::string::npos) {
            result += ' ';
        }
    }
    
    return result;
}

int main() {
    std::cout << camelCase("camel-case example-test-string") << std::endl;
    return 0;
}