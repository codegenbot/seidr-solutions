#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<std::string> strings(n);
    for (std::string& s : strings) {
        std::cin >> s;
    }
    
    std::string prefix;
    std::cin >> prefix;
    
    std::vector<std::string> expected = filterByPrefix(strings, prefix);
    assert(isSame(expected, {"xxx", "xxxAAA", "xxx"}));
    return 0;
}