```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        int num = std::stoi(a[i] + b[i]);
        if (!issorted({std::stoi(a[i] + b[i])})) return false;
    }
    return true;
}

bool issorted(std::vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i-1] > v[i]) return false;
    }
    return true;
}

std::vector<int> sortListSum(std::vector<std::pair<std::string, std::string>> v) {
    std::vector<int> result;
    for (const auto& pair : v) {
        int num = std::stoi(std::to_string(std::stoll(pair.first)) + std::to_string(std::stoll(pair.second)));
        if (!num) return {};
        result.push_back(num);
    }
    std::sort(result.begin(), result.end());
    return result;

}

int main() {
    assert(issame({{"aaaa", "bbbb"}, {"cccc", "ddd"}}, {{"cccc", "ddd"}, {"aaaa", "bbbb"}}));
}