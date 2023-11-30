#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int i = 0;
    while (i <= text.length() - target.length()) {
        int j = 0;
        while (j < target.length() && text.at(i+j) == target.at(j)) {
            j++;
        }
        if (j == target.length()) {
            indices.push_back(i);
            i += target.length();
        } else {
            i++;
        }
    }
    return indices;
}