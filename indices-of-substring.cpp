#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    int pos = 0;
    while (pos < text.length()) {
        pos = text.find(target, pos + target.length());
        indices.push_back(pos);
        pos += target.length() - 1;
    }

    return indices;
}