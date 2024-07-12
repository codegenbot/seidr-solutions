```cpp
#include <vector>
#include <string>

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
    vector<string> result;
    for (const string& word : {"grunt", "trumpet", "prune", "gruesome"}) {
        result.push_back(word);
    }
    set<string> actualSet(result.begin(), result.end());
    set<string> expectedSet = {"grunt", "prune"};
    bool same = (actualSet == expectedSet);
    return 0;
}