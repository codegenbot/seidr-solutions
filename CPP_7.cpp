#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(substring) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& words) {
    std::sort(words.begin(), words.end());
    for (size_t i = 0; i < words.size() - 1; ++i) {
        if (words[i] != words[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    bool same = issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"));
    return 0;
}