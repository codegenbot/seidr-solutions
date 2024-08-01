#include <algorithm>
#include <string>

int countUniqueCharacters(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    auto it = std::unique(str.begin(), str.end());
    return std::distance(str.begin(), it);
}