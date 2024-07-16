#include <string>
#include <vector>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;
    for (const auto& c : split(str, '-')) {
        if (!result.empty()) {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        } else {
            result = tolower(c);
            capitalizeNext = true;
        }
    }
    return result;
}

std::string split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return join(tokens, ' ');
}

std::string join(const std::vector<std::string>& tokens, char delimiter) {
    std::string result;
    for (const auto& token : tokens) {
        if (!result.empty()) {
            result += delimiter;
        }
        result += token;
    }
    return result;
}