#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& str, const std::string& sub) {
    std::vector<std::string> filtered;
    for (const auto& s : str) {
        if (!s.find(sub)) {
            filtered.push_back(s);
        }
    }
    return filtered;
}

int test() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    assert(issame({}, filterBySubstring(str, "run")));
    return 0;
}

int main() {
    test();
    return 0;
}