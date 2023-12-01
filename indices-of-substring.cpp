#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t targetLength = target.length();
    size_t textLength = text.length();

    if (target.empty()) {
        return indices;
    }

    for (size_t i = 0; i < textLength - targetLength + 1; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}