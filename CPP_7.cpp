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

auto main() -> int {
    auto result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    auto actualSet(result.begin(), result.end());
    auto expectedSet = {"grunt", "prune"};
    bool same = (actualSet == set<string>(expectedSet.begin(), expectedSet.end()));
    assert(same);
    return 0;
}