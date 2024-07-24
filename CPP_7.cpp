#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

void filter_by_substring(std::vector<std::string>& vec, const std::string& substr) {
    vec.erase(std::remove_if(vec.begin(), vec.end(), [substr](const std::string& s) {
        return s.find(substr) != std::string::npos;
    }), vec.end());
}

int main() {
    std::vector<std::string> vec = {"grunt", "trumpet", "prune", "gruesome"};
    filter_by_substring(vec, "run");
    assert(vec == std::vector<std::string>{"grunt", "prune"});
    return 0;
}