#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int idx = 0;

    while ((idx = text.find(target)) != std::string::npos) {
        result.push_back(idx);
        idx += target.size();
    }

    return result;
}