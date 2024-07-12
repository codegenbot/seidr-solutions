```cpp
#include <vector>
#include <string>

bool same(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (const auto& word : v1) {
        if (std::find(v2.begin(), v2.end(), word) == v2.end())
            return false;
    }
    return true;
}

int main() {
    bool result = same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"});
    return 0;
}