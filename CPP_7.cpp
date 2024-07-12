```cpp
#include <vector>
#include <string>

bool std::equal(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size())
        return false;
    for (size_t i = 0; i < vec1.size(); ++i)
        if (vec1[i] != vec2[i])
            return false;
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