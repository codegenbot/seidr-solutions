#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int pos = text.find(target);
    while (pos <= static_cast<int>(text.size()) - static_cast<int>(target.size())) {
        indices.push_back(pos + 1);
        pos = text.find(target, pos + 1);
    }
    return indices;
}