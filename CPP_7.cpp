```cpp
#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& a, const std::string& b) {
    std::vector<std::string> result;
    for (const auto& str : a) {
        if (str.find(b) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").end(), {"grunt", "prune"}));
}