```cpp
#include <vector>
#include <string>

bool equal_vectors(const std::vector<std::pair<std::string, std::string>>& v1, const std::vector<std::pair<std::string, std::string>>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i].first != v2[i].first || v1[i].second != v2[i].second) return false;
    }
    return true;
}

std::vector<std::pair<std::string, std::string>> filter_by_substring(const std::vector<std::pair<std::string, std::string>>& words, const std::string& substring) {
    std::vector<std::pair<std::string, std::string>> result;
    for (const auto& word : words) {
        if (word.first.find(substring) != std::string::npos || word.second.find(substring) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;

int main() {
    std::vector<std::pair<std::string, std::string>> v1;
    v1.push_back(std::make_pair("apple", "banana"));
    v1.push_back(std::make_pair("hello", "world"));

    std::vector<std::pair<std::string, std::string>> v2;
    v2.push_back(std::make_pair("apple", "banana"));
    v2.push_back(std::make_pair("goodbye", "world"));

    if (!equal_vectors(v1, v2)) {
        std::cout << "Vectors are not equal" << std::endl;
    } else {
        std::cout << "Vectors are equal" << std::endl;
    }

    std::vector<std::pair<std::string, std::string>> words = {std::make_pair("apple", "banana"), std::make_pair("hello", "world")};
    std::string substring = "o";
    std::vector<std::pair<std::string, std::string>> result = filter_by_substring(words, substring);
    for (const auto& word : result) {
        if (word.first.find(substring) != std::string::npos || word.second.find(substring) != std::string::npos) {
            std::cout << "Found substring in: ";
            std::cout << word.first << " and " << word.second << std::endl;
        }
    }

    return 0;
}