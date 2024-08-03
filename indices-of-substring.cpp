#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target)) != std::string::npos) {
        result.push_back(pos);
        pos += target.length();
    }

    return result;
}