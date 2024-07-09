```
#include <algorithm>
#include <vector>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (const auto& word : split(s, ' ')) {
        std::string temp = word;
        std::sort(temp.begin(), temp.end());
        result += temp + " ";
    }
    return result.substr(0, result.size() - 1);
}

std::string split(const std::string& str, char sep) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(sep)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens.size() > 1 ? join(tokens, " ") : tokens[0];
}

std::string join(const std::vector<std::string>& vec, const std::string& sep) {
    std::string result;
    for (const auto& s : vec) {
        result += s + sep;
    }
    return result.substr(0, result.size() - 1);
}