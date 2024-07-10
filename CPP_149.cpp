```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        int num = stoi(a[i] + " " + b[i]);
        if (num != stoi(sortListSum({{a[i], b[i]}})[0])) return false;
    }
    return true;
}

std::vector<int> sortListSum(std::vector<std::pair<std::string, std::string>> v) {
    std::vector<int> result;
    for (const auto& pair : v) {
        int num = stoi(pair.first + " " + pair.second);
        if (!num) return {};
        result.push_back(num);
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame({{"aaaa", "bbbb"}, {"cccc", "ddd"}}, {{"cccc", "ddd"}, {"aaaa", "bbbb"}}));
}