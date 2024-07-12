#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
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
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").end(), {"grunt", "prune"}) );
    return 0;
}