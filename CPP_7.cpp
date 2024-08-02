#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_substring(std::vector<std::string> words, std::string sub) {
    std::vector<std::string> filtered;
    for (const std::string& word : words) {
        if (word.find(sub) != std::string::npos) {
            filtered.push_back(word);
        }
    }
    return filtered;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}