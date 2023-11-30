#include <vector>
#include <string>

std::vector<std::string::size_type> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<std::string::size_type> indices;
    std::string::size_type targetLen = target.length();
    std::string::size_type textLen = text.length();

    std::string::size_type i = 0;
    while (i <= textLen - targetLen) {
        std::string::size_type j = 0;
        while (j < targetLen && text[i+j] == target[j]) {
            j++;
        }
        if (j == targetLen) {
            indices.push_back(i);
            i += targetLen;
        } else {
            i++;
        }
    }

    return indices;
}