#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}