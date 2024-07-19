```cpp
#include <vector>
#include <string>

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::vector<std::string>>& words, const std::string& substring) {
    std::vector<std::vector<std::string>> result;
    for (const auto& word_list : words) {
        std::vector<std::string> new_list;
        for (const auto& word : word_list) {
            if (word.find(substring) != std::string::npos) {
                new_list.push_back(word);
            }
        }
        if (!new_list.empty()) {
            result.push_back(new_list);
        }
    }
    return result;
}

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
        for (size_t j = 0; j < a[i].size(); ++j) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<std::string>> words = {{ "grunt" }}, {{"trumpet", "prune", "gruesome"}};
    std::string substring = "run";
    std::vector<std::vector<std::string>> expected_result = {{{"grunt"}}, {{{"prune"}}}};
    
    auto result = filter_by_substring(words, substring);
    
    assert(issame(result, expected_result));
    
    return 0;
}