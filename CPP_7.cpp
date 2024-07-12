#include <vector>
#include <string>
#include <set>

bool equalSets(const std::set<std::string>& a, const std::set<std::string>& b) {
    return (a == b);
}

int main() {
    std::vector<std::string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    std::set<std::string> actualSet(result.begin(), result.end());
    std::set<std::string> expectedSet = {"grunt", "prune"};
    bool same = equalSets(actualSet, expectedSet);
    return 0;
}