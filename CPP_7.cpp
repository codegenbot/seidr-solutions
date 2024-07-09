```cpp
#include <vector>
#include <algorithm>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& v, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& str : v) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return filter_by_substring(a, "run") == filter_by_substring(b, "run");
}

int main() {
    assert(issame({"grunt", "trumpet", "prune", "gruesome"}, {"grunt", "trumpet", "prune", "gruesome"}) && 
           !issame({"grunt", "trumpet", "prune", "gruesome"}, {"grunt", "trumpet", "run", "gruesome"}));
    return 0;
}