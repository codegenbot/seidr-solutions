#include <vector>
#include <string>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> str, std::string sub) {
    std::vector<std::string> result;
    for(const auto& s : str) {
        if(s.find(sub) != std::string::npos) result.push_back(s);
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}