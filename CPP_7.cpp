#include <vector>
#include <string>

std::vector<std::vector<std::string>> filter_by_substring(std::vector<std::vector<std::string>> list, std::string substring) {
    std::vector<std::vector<std::string>> result;
    for (const auto& sublists : list) {
        std::vector<std::string> filtered;
        for (const auto& word : sublists) {
            if (word.find(substring) != std::string::npos) {
                filtered.push_back(word);
            }
        }
        if (!filtered.empty()) {
            result.push_back(filtered);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}