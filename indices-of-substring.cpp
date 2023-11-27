#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    
    std::size_t pos = 0;
    while (pos < text.length()) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(static_cast<int>(pos));
        pos += 1;
    }
    
    return indices;
}