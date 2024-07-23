#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int lastFound = -1;

    for (int i = 0; i <= text.size() - target.size(); i++) {
        if (text.substr(i, target.size()) == target) {
            if (i != lastFound + target.size()) {
                result.push_back(i);
                lastFound = i;
            }
        }
    }

    return result;
}