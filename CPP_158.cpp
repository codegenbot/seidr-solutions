#include <string>
#include <vector>

std::string find_max(std::vector<std::string> words) {
    std::string result = *std::max_element(words.begin(), words.end(),
        [&](const std::string& a, const std::string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > count(a.begin(), a.end(), unique_copy(a.begin(), a.end()));
        });
    return result;
}