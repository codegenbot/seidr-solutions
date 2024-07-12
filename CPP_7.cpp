#include <vector>
#include <string>

bool issame(const std::set<std::string>& a, const std::set<std::string>& b) {
    return (a.size() == b.size()) && (a == b);
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(substring) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    std::set<std::string> actualSet(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), (filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")).end());
    std::set<std::string> expectedSet = {"grunt", "prune"};
    bool same = (actualSet == expectedSet);
    assert(same == issame(actualSet, expectedSet));
    return 0;
}