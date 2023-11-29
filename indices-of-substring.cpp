#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t len = target.length();
    size_t n = text.length();

    for (size_t i = 0; i <= n - len + 1; ++i) {
        bool found = true;
        for (size_t j = 0; j < len; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}