#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (!filter_by_substring({a[i], b[i]}, "run").size() == 2 || a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
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
    assert(std::vector<std::string>(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")) == std::vector<std::string>({"grunt", "prune"}));
    return 0;
}