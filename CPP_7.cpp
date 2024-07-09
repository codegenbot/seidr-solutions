#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> words, const std::string& substring) {
    for (auto &word : words) {
        if (!word.find(substring)) {
            return {word};
        }
    }
    return {};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}