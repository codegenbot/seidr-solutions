```cpp
#include <iostream>
#include <vector>
#include <string>

bool same(const std::vector<std::vector<std::string>>& v1, const std::vector<std::vector<std::string>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i].size() != v2[i].size()) return false;
        for (int j = 0; j < v1[i].size(); ++j) {
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
        if (found) result.push_back({word}); // removed the inner vector
    }
    return result;
}

int main() {
    assert(same(filter_by_substring({{"grunt"}, {"trumpet", "prune", "gruesome"}}, "run"), {{"grunt"}, {"prune"}}));
    return 0;
}