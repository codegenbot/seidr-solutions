#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        
        if (pos == std::string::npos) break;
        
        result.push_back(pos);
        start = pos + 1;
    }
    
    return result;
}