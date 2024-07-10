#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t textSize = text.length();
    size_t targetSize = target.length();

    for (size_t i = 0; i <= textSize - targetSize; ++i) {
        bool found = true;
        for (size_t j = 0; j < targetSize; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) result.push_back(i);
    }

    return result;
}