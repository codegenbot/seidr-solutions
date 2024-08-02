#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = split(str, " ");
    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += std::string(1, char(std::toupper(word[0])));
        } else {
            result += word;
        }
        for (int i = 1; i < word.size(); ++i) {
            result += std::string(1, char(std::tolower(word[i])));
        }
    }
    return result;
}

std::vector<std::string> split(const std::string& str, const std::string& delimiter) {
    size_t pos = 0;
    std::vector<std::string> tokens;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.size());
    }
    tokens.push_back(str);
    return tokens;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl;
    std::cout << kebabToCamel("two-words") << std::endl;
    std::cout << kebabToCamel("two words") << std::endl;
    std::cout << kebabToCamel("all separate words") << std::endl;
    return 0;
}