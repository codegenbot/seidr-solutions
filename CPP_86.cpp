#include <vector>
#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (const auto& word : split(s, " ")) {
        result += std::accumulate(word.begin(), word.end(),
            std::string{}, [](std::string acc, char c) { return acc + c; }) + " ";
    }
    return result.substr(0, result.size() - 1);
}

std::string split(const std::string& str, const std::string& delimiter) {
    size_t pos = 0;
    std::vector<std::string> tokens;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return std::string(tokens.begin(), tokens.end());