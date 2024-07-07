#include <algorithm>
#include <vector>
#include <set>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& str, const std::string& subStr) {
    std::vector<std::string> result;
    for (const auto& s : str) {
        if (s.find(subStr) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> result = filterBySubstring(str, "run");
    for (const auto& s : result) {
        if (!issame({s}, {"grunt", "prune"})) {
            return 1;
        }
    }
}