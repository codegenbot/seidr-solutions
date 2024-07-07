```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& str, const std::string& substr) {
    std::vector<std::string> filtered;
    for (const auto& s : str) {
        if (!s.find(substr)) {
            filtered.push_back(s);
        }
    }
    return filtered;
}

int test() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> filtered = filterBySubstring(str, "run"); 
    assert(issame({},filtered)); 
    return 0;
}