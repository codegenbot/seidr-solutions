#include <string>
#include <vector>
#include <cctype>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    for (const auto& c : str) {
        if (c == delimiter) {
            tokens.push_back(token);
            token.clear();
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> words = split(str, '-');
    std::string result;
    bool capitalizeNext = true;
    for (const auto& word : words) {
        if (!result.empty()) {
            if (capitalizeNext) {
                result += toupper(word[0]);
                capitalizeNext = false;
            } else {
                result += tolower(word);
            }
        } else {
            result = tolower(word);
            capitalizeNext = true;
        }
    }
    return result;
}