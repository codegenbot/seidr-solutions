#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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

bool same(const vector<string>& a, const set<string>& b) {
    set<string> s(a.begin(), a.end());
    return (s == b);
}

int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    bool same1 = same(result, {"grunt", "prune"});
    assert(same1 == issame({result.begin(), result.end()}, {"grunt", "prune"}));
    return 0;
}