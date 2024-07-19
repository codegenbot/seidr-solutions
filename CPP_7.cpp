```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& v1, const std::vector<std::vector<std::string>>& v2) {
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
    for (const auto& word_list : words) {
        std::vector<std::string> new_word_list;
        for (const auto& word : word_list) {
            if (word.find(substring) != std::string::npos) {
                new_word_list.push_back(word);
            }
        }
        if (!new_word_list.empty()) result.push_back(new_word_list);
    }
    return result;
}

int main() {
    std::vector<std::vector<std::string>> words = {{ "grunt" }}, {{"trumpet", "prune", "gruesome"}};
    std::string substring = "run";
    std::vector<std::vector<std::string>> expected_result = {{{"grunt"}}, {{{"prune"}}}};
    
    auto result = filter_by_substring(words, substring);
    
    assert(issame(result, expected_result));
    
    return 0;
}