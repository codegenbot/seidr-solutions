#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char ch) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(ch)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = split(s, '-');
    std::string result;
    
    for (int i = 0; i < words.size(); i++) {
        if (i > 0)
            result += toupper(words[i][0]) + tolower(string(words.begin() + 1, words.end()));
        else
            result += words[i];
        if (i < words.size() - 1)
            result += " ";
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "CamelCase equivalent: " << kebabToCamel(input) << std::endl;

    return 0;
}