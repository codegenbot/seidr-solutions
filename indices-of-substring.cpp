#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    for (int i = 0; ; i++) {
        size_t pos = text.find(target, i);
        if (pos == stdstring::npos) break;
        result.push_back(pos);
        i = pos;
    }
    return result;
}