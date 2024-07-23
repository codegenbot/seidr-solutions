```cpp
#include <assert.h>
#include <vector>
#include <string>

bool issame(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> vec, std::string sub) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(sub) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}