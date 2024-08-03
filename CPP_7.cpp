#include <cassert>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& substr) {
    std::vector<std::string> filtered;
    for (const auto& word : words) {
        if (word.find(substr) != std::string::npos) {
            filtered.push_back(word);
        }
    }
    return filtered;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    return 0;
}