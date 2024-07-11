#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string result = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return (a.size() + std::count(a.begin(), a.end(), ' ')) <
                   (b.size() + std::count(b.begin(), b.end(), ' '));
        });
    return result;
}