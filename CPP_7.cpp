#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& substr) {
    std::vector<std::string> filtered_words;
    for (const std::string& word : words) {
        if (word.find(substr) != std::string::npos) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}