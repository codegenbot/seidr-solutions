#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string res = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return (a.size() == b.size()) ? a < b : a.size() < b.size();
        });
    return res;
}