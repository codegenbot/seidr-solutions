```cpp
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

int main() {
    // Test case for equal_vectors function
    std::vector<std::vector<std::string>> v1;
    v1.push_back({{"apple", "banana"}});
    v1.push_back({{"hello", "world"}});

    std::vector<std::vector<std::string>> v2;
    v2.push_back({{"apple", "banana"}});
    v2.push_back({{"goodbye", "world"}});

    if (!equal_vectors(v1, v2)) {
        std::cout << "Vectors are not equal" << std::endl;
    } else {
        std::cout << "Vectors are equal" << std::endl;
    }

    // Test case for filter_by_substring function
    std::vector<std::vector<std::string>> words = {{{"apple", "banana", "hello"}, {"world", "goodbye"}}};
    std::string substring = "o";
    std::vector<std::vector<std::string>> result = filter_by_substring(words, substring);
    for (const auto& word : result) {
        for (const auto& w : word) {
            if (w.find(substring) != std::string::npos) {
                std::cout << "Found substring in: ";
                for (const auto& x : word) {
                    std::cout << x << " ";
                }
                std::cout << std::endl;
            }
        }
    }

    return 0;
}