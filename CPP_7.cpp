#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_substring(std::vector<std::string> words, std::string target) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(target) != std::string::npos)
            result.push_back(word);
    }
    return result;
}

int main() {
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").end(), {"grunt", "prune"}));
    return 0;
}