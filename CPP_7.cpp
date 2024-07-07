```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& str, const std::string& substr) {
    std::vector<std::string> filtered;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i].find(substr) == std::string::npos) {
            filtered.push_back(str[i]);
        }
    }
    return filtered;
}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    assert(issame(filterBySubstring(str, "run"), {"grunt", "prune"}));
    return 0;
}