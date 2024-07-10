```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + b[i] != sortListSum({{a[i], b[i]}})[0]) return false;
    }
    return true;
}

std::vector<int> sortListSum(std::vector<std::pair<std::string, std::string>> v) {
    std::vector<int> result;
    for (const auto& pair : v) {
        result.push_back(stoi(pair.first + pair.second));
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame({{"aaaa", "bbbb"}, {"cccc", "ddd"}}, {{"cccc", "ddd"}, {"aaaa", "bbbb"}}));
}