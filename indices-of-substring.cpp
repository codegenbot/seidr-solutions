```cpp
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (size_t i = 0; ; ++i) {
        size_t pos = text.find(target, i);
        if (pos == std::string::npos) break;
        result.push_back(pos);
        i = pos + target.size();
    }
    return result;
}