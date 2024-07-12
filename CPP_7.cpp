#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> words, std::string substring) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(substring) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    auto filtered = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    bool same = issame(filtered, {"grunt", "prune"});
    return 0;
}