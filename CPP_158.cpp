#include <string>
#include <vector>
#include <algorithm>

std::string find_max(const std::vector<std::string>& words) {
    std::string max_str = *std::max_element(words.begin(), words.end(),
        [](const std::string& s1, const std::string& s2) {
            return s1.size() > s2.size();
    });
    return max_str;
}