```cpp
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return (a == b);
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
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    set<string> actualSet(result.begin(), result.end());
    set<string> expectedSet = {"grunt", "prune"};
    bool same = (actualSet == expectedSet);
    assert(same == (issame({result.begin(), result.end()}, expectedSet)));
    return 0;
}