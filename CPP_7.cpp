#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& sub) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(sub) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == std::vector<std::string>{"grunt", "prune"});
    return 0;
}