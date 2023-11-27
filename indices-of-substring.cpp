#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}