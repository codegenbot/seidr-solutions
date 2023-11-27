#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    
    size_t pos = 0;
    while (pos < text.length()) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += target.length();
    }
    
    return indices;
}