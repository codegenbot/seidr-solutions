```cpp
#include <vector>
#include <string>

bool issame(const std::set<std::string>& a) {
    return (a.size() > 0);
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
    std::vector<std::string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    std::set<std::string> actualSet(result.begin(), result.end());
    std::set<std::string> expectedSet = {"grunt", "prune"};
    bool same = (actualSet == expectedSet);
    assert(same == issame(actualSet));
    return 0;
}