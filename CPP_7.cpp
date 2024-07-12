#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
    std::vector<std::string> words = {"grunt", "trumpet", "prune", "gruesome"};
    const std::string& substring = "run";
    auto result = filter_by_substring(words, substring);
    bool same = isSame({result.begin(), result.end()}, {{"grunt", "prune"}});
    return 0;
}