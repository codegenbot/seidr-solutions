#include <vector>
#include <algorithm>
#include <assert.h>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strVec, const std::string& targetSubstr) {
    std::vector<std::string> result;
    for (const auto& str : strVec) {
        if (str.find(targetSubstr) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").end(), {"grunt", "prune"}->begin()));
    return 0;
}