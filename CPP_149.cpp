```cpp
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

bool issorted(std::vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i-1] > v[i]) return false;
    }
    return true;
}

std::vector<int> sortListSum(const std::vector<std::pair<std::string, std::string>>& v) {
    std::vector<int> result;
    for (const auto& pair : v) {
        int num = 0;
        for (char c : pair.first) {
            num = num * 10 + (c - '0');
        }
        for (char c : pair.second) {
            num = num * 10 + (c - '0');
        }
        if (!num) return {}; 
        result.push_back(num);
    }
    std::sort(result.begin(), result.end());
    return (result.size() > 0 ? result : {}); 
}

int main() { 
    assert(issame({{"aaaa", "bbbb"}, {"cccc", "ddd"}}, {{"cccc", "ddd"}, {"aaaa", "bbbb"}})); 
    assert(issame(std::vector<std::string>{{"aaaa", "bbbb"}, {"dd", "cc"}},
                  std::vector<std::string>{{"cc", "dd"}, {"aaaa", "bbbb"}})); 
}