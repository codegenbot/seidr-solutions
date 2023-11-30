#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t textLen = text.length();

    size_t i = 0;
    while (i <= textLen - target.length()) {
        size_t j = 0;
        while (j < target.length() && text[i+j] == target[j]) {
            j++;
        }
        if (j == target.length()) {
            indices.push_back(static_cast<int>(i));
            i += target.length();
        } else {
            i++;
        }
    }

    return indices;
}