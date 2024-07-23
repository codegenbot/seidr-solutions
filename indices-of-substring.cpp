```cpp
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = 0;
    
    while ((index = text.find(target)) != std::string::npos) {
        result.push_back(index);
        index += 1; // skip the same match
    }
    
    return result;
}