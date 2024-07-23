```cpp
#include <vector>
#include <assert.h>

std::vector<std::string> filter_by_substring(std::vector<std::string> arr, std::string sub) {
    std::vector<std::string> result;
    for (const auto& str : arr) {
        if (str.find(sub) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}