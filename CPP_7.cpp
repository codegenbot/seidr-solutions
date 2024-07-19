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
        if (found) {
            result.push_back(word);
        } else if (!result.empty()) {
            return result; // If no more words are found, stop and return the current result
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
    std::string substring = "run";
    
    assert(same(filter_by_substring({words}, substring), {{"grunt"}, {"prune"}}));
    
    return 0;
}