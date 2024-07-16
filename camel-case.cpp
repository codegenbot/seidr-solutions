#include <string>
#include <vector>

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

std::string split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    tokens.push_back(str);
    return join(tokens);
}

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;
    for (const auto& c : split(str, '-')) {
        if (!result.empty()) {
            if (capitalizeNext) {
                result += toupper(c[0]);
                capitalizeNext = false;
            } else {
                result += tolower(c[0]);
            }
            result += c.substr(1);
        } else {
            result = tolower(c);
            capitalizeNext = true;
        }
    }
    return result;
}