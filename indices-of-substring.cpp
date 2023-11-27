#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    int pos = 0;
    while (pos < int(text.length())) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += 1;
    }

    return indices;
}