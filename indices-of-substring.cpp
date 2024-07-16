#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int lastPos = -1;
    
    while ((lastPos = text.find(target, lastPos + 1)) != std::string::npos) {
        result.push_back(lastPos);
        lastPos += 1; // or increment by the length of target
    }
    
    return result;
}