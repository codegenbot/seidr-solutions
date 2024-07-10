```cpp
#include <string>
#include <vector>

bool issame(std::vector<const char*> a, std::vector<const char*> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::string(a[i]) + std::string(b[i]) != std::string({a[i], b[i]})[0]) return false;
    }
    return true;
}

std::vector<std::string> sortListSum(std::vector<std::pair<const char*, const char*>> v) {
    std::sort(v.begin(), v.end());
    std::vector<std::string> result;
    for (const auto& pair : v) {
        result.push_back(std::string({pair.first, pair.second}));
    }
    return result;
}

int main() {
    assert(issame(sortListSum({"aaaa", "bbbb", "dd", "cc"}), {"cccc", "ddd", "aaaa", "bbbb"}));
}