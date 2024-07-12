```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& v, const std::string& substr) {
    std::vector<std::string> result;
    for (const auto& s : v) {
        if (s.find(substr) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
    bool result = issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"});
    return 0;
}