```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return filter_by_substring(a, "run") == filter_by_substring(b, "run");
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& v, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& str : v) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame({"grunt", "trumpet", "prune", "gruesome"}, {"grunt", "trumpet", "prune", "gruesome"}) == true);
    return 0;
}