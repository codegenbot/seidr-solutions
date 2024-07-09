#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::string result = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return (a.length() == b.length()) ? a < b : a.length() > b.length();
    });
    return result;
}