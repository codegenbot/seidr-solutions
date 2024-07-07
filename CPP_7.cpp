#include <vector>
#include <string>
#include <initializer_list>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& str, const std::string& substr) {
    std::vector<std::string> filtered;
    for (const auto& s : str) {
        if (!s.find(substr)) {
            filtered.push_back(s);
        }
    }
    return filtered;
}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    assert(issame(filterBySubstring(str, "run"), {"grunt", "prune"}));
    return 0;
}