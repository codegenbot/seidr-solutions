#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    std::string::size_type pos = 0;
    while (pos < text.length()) {
        pos = text.find(target, pos + target.length() - 1);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += target.length();
    }

    return indices;
}