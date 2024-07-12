#include <vector>
#include <string>

bool std::equal(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    for (size_t i = 0; i < v1.size() && i < v2.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
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
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").end(), {"grunt", "prune"}));
    return 0;
}