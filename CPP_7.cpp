#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> words, std::string substring) {
    for (auto& word : words) {
        if (!word.find(substring)) {
            return {word};
        }
    }
    return {};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").second ,{{"grunt", "prune"}}));
}