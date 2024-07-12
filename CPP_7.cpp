#include <initializer_list>
#include <vector>
#include <string>

bool contains(const std::vector<std::string>& a) {
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
    bool same = contains({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")});
    return 0;
}