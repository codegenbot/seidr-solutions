#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.size();
    int textLength = text.size();

    if (targetLength == 0) {
        return indices;
    }

    for (int i = 0; i < textLength - targetLength + 1; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}