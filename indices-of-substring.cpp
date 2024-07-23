#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    for (int i = 0; ; i++) {
        size_t pos = text.find(target, i);
        if (pos == std::string::npos) break;
        result.push_back(pos);
        i = pos + 1; // Adjust the starting position
    }
    return result;
}