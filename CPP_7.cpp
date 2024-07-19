#include <vector>
#include <string>

bool equal_vectors(const std::vector<std::vector<std::string>>& v1, const std::vector<std::vector<std::string>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i].size() != v2[i].size()) return false;
        for (size_t j = 0; j < v1[i].size(); ++j) {
            if (v1[i][j] != v2[i][j]) return false;
        }
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::vector<std::string>>& words, const std::string& substring) {
    std::vector<std::vector<std::string>> result;
    for (const auto& word : words) {
        bool found = false;
        for (const auto& w : word) {
            if (w.find(substring) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (found) {
            result.push_back(word);
        }
    }
    return result;