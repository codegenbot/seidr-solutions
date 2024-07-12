```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> by_length(const std::vector<std::pair<std::string, int>>& input) {
    std::vector<std::string> result;
    for (auto& p : input) {
        result.push_back(p.first);
    }
    return result;
}

int main() {
    std::vector<std::pair<std::string, int>> input = {{"Nine", 1}, {"Eight", 2}, {"Four", 3}};
    auto output = by_length(input);
    // assert statement remains unchanged...
    return 0;
}