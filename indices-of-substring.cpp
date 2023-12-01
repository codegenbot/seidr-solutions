#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t targetLength = target.size();
    size_t textLength = text.size();

    if (targetLength > textLength) {
        return indices;
    }

    size_t j;
    for (size_t i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        
        for (j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        
        if (found || j == targetLength) {
            indices.push_back(i);
        }
    }

    return indices;
}