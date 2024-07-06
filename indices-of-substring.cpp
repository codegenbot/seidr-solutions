
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> output;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == target) {
            output.push_back(i);
        }
    }
    return output;
}