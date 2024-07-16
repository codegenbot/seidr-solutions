```c++
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
    size_t pos = 0;
    bool capitalizeNext = (str[0] >= 'a' && str[0] <= 'z');
    for (const auto& c : split(str, '-')) {
        if (!result.empty()) {
            if (capitalizeNext) {
                result += std::string(1, toupper(c[0])) + c.substr(1);
                capitalizeNext = false;
            } else {
                result += std::string(1, tolower(c[0])) + c.substr(1);
            }
        } else {
            if (c[0] >= 'A' && c[0] <= 'Z') {
                result += "abcdefghijklmnopqrstuvwxyz" + c;
                capitalizeNext = true;
            } else {
                result += c;
                capitalizeNext = (c[0] >= 'a' && c[0] <= 'z');
            }
        }
    }
    return result;
}