```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        std::string a_str = a[i];
        std::string b_str = b[i];
        int num1 = std::stoi(a_str);
        int num2 = std::stoi(b_str);
        if (!issorted({num1})) return false;
        if (!issorted({num2})) return false;
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
        int num = std::stoi(std::to_string(std::stoi(pair.first)) + std::to_string(std::stoi(pair.second)));
        if (!num) return {};
        result.push_back(num);
    }
    std::sort(result.begin(), result.end());
    return result;

}

int main() {
    assert(issame({{"aaaa", "bbbb"}, {"cccc", "ddd"}}, {{"cccc", "ddd"}, {"aaaa", "bbbb"}}));
}